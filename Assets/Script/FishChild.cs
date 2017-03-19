using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Diagnostics;
using UnityEngine.EventSystems;

public class FishChild : MonoBehaviour, IPointerDownHandler
{

	// Use this for initialization
	Transform mTransform;
	Animator mAnimator;
	Rigidbody2D mRigidBody2D;
	Camera mainCamera;
	Vector3 targetLocation;
	Vector3 currentLocation;
	int mH;
	int mW;
	int baseYRotation = 0;
	static int SPEED_RATE = 4;
	Stopwatch Stopwatch = new Stopwatch ();
	int animatorSpeedWhenHold = 2 * SPEED_RATE;
	bool isHolding = false;
	GameObject targetFood;
	bool isFindingFood = false;


	void Start ()
	{
		mTransform = GetComponent<Transform> ();
		mAnimator = GetComponent<Animator> ();
		mRigidBody2D = GetComponent<Rigidbody2D> ();
		mainCamera = Camera.main;
		mH = Screen.height;
		mW = Screen.width;
		swim ();

	}

	void Update ()
	{
		if (!isFindingFood){
			findTargetFood ();
		}
		if (!isHolding) {

			adjustSwimSpeed (10);
			updateSwimDirection ();
			if (isFindingFood) {
				swimToTargetFood ();
				return;
			}
			// Check out camera include auto swim
			checkOutOfCamera ();
		}
	}

	private void findTargetFood(){
		if (FoodStoreController.foodList.Count > 0) {
			GameObject food = FoodStoreController.foodList [Random.Range (0, FoodStoreController.foodList.Count)];
			float distance = Vector3.Distance (food.GetComponent<Transform> ().position
				, gameObject.GetComponent<Transform> ().position);
			if (distance <= 1.5) {
				targetFood = food;
				isFindingFood = true;
				Stopwatch.Reset ();
			}
		}
	}

	private void swimToTargetFood(){
		if (targetFood == null) {
			FoodStoreController.foodList.Remove (targetFood);
			isFindingFood = false;
			return;
		}
		Stopwatch.Stop ();
		double interval = Stopwatch.Elapsed.TotalSeconds;
		if (interval > 1) {
			// swim and reset stop watch
			int RATE = SPEED_RATE;
			currentLocation = mTransform.position;
			targetLocation = targetFood.GetComponent<Transform> ().position;
			float forceX = targetLocation.x - currentLocation.x;
			float forceY = targetLocation.y - currentLocation.y;
			mRigidBody2D.velocity = new Vector2 (forceX, forceY);
			Stopwatch.Reset ();
		} else {
			Stopwatch.Start ();
		}
	}

	void swim ()
	{
		int RATE = SPEED_RATE;
		currentLocation = mTransform.position;
		targetLocation = 
			mainCamera.ScreenToWorldPoint (new Vector3 (Random.RandomRange (0, mW), Random.Range (0, mH), -1));
		float forceX = targetLocation.x - currentLocation.x;
		float forceY = targetLocation.y - currentLocation.y;
		mRigidBody2D.AddForce (new Vector2 (forceX * RATE, forceY * RATE));
	}

	void stopSwim ()
	{
		mRigidBody2D.velocity = new Vector2 (0, 0);
	}

	void adjustSwimSpeed (int rate)
	{
		var s = Mathf.Abs (mRigidBody2D.velocity.x) + Mathf.Abs (mRigidBody2D.velocity.y);
		mAnimator.speed = s * rate;
	}
	// Update is called once per frame

	void updateSwimDirection ()
	{

		if (mRigidBody2D.velocity.x > 0) {
			mTransform.localEulerAngles = new 
				Vector3 (mTransform.localEulerAngles.x, baseYRotation, 0);
		} else {
			mTransform.localEulerAngles = new 
				Vector3 (mTransform.localEulerAngles.x, baseYRotation - 180, 0);
		}
	}

	void checkOutOfCamera ()
	{
		currentLocation = mTransform.position;
		Vector3 currentLocationInPixel = mainCamera.WorldToScreenPoint (currentLocation);
		double limitX = mW * 0.05;
		double limitY = mH * 0.05;
		if (currentLocationInPixel.x - 0 < limitX || mW - currentLocationInPixel.x < limitX
		    || currentLocationInPixel.y - 0 < limitY || mH - currentLocationInPixel.y < limitY) {
			swim ();
		} else {
			// Check auto swim
			Stopwatch.Stop ();
			double interval = Stopwatch.Elapsed.TotalSeconds;
			int intervalLimit = 3;
			if (interval > intervalLimit) {
				if (UnityEngine.Random.Range (0, float.Parse (interval.ToString ())) > intervalLimit) {
					swim ();
					Stopwatch.Reset ();
				} else {
					Stopwatch.Start ();
				}
			} else {
				Stopwatch.Start ();
			}

		}
	}

	void OnCollisionEnter (Collision collision)
	{
		UnityEngine.Debug.Log ("meet friend");
		swim ();

	}

	void OnMouseDown ()
	{
		mRigidBody2D.velocity = new Vector2 (0, 0);
		mAnimator.speed = this.animatorSpeedWhenHold;
		isHolding = true;


	}
	void OnMouseDrag(){
		Vector3 curScreenPoint = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 0);
		Vector3 curPosition = mainCamera.ScreenToWorldPoint (curScreenPoint);
		this.mTransform.position = new Vector3 (curPosition.x, curPosition.y, 0);

	}

	void OnMouseUp (){
		mAnimator.speed = 1;
		isHolding = false;
	}

	public void OnPointerDown (PointerEventData eventData) 
	{
		UnityEngine.Debug.Log (this.gameObject.name + " Was Clicked.");
	}

}
