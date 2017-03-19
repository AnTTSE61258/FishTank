using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FoodStoreController : MonoBehaviour {
	public GameObject food;
	// Use this for initialization
	public GameObject creatingObject;
	public static List<GameObject> foodList = new List<GameObject>();
	Transform mTransform;
	public Text text;
	void Start () {
		mTransform = GetComponent<Transform> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnMouseDown () {
		if (CheckFoodResource.foodCount <= 0) {
			GetComponent<AudioSource> ().Play ();

			return;
		}
		Vector3 objectPosition = mTransform.localPosition;
		creatingObject = Instantiate (food);
		foodList.Add (creatingObject);
		setPositionForCreatingObject ();
		CheckFoodResource.foodCount--;
		CheckFoodResource.saveFoodCountToPlayerPref ();
	}
	void OnMouseDrag (){
		setPositionForCreatingObject ();
	}


	void OnMouseUp (){
		creatingObject = null;
	}

	private void setPositionForCreatingObject(){
		//check if food is still exist
		if (creatingObject != null) {
			Vector3 curScreenPoint = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 0);
			Vector3 curPosition = Camera.main.ScreenToWorldPoint (curScreenPoint);
			creatingObject.GetComponent<Transform>().position = new Vector3 (curPosition.x, curPosition.y, 0);
		}
	}

}
