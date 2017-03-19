using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AssemblyCSharp;

public class FoodAutoDestroy : MonoBehaviour {
	System.Diagnostics.Stopwatch StopWatch = new System.Diagnostics.Stopwatch();
	// Use this for initialization
	int destroyAfterSeconds = 30;
	void Start () {
		StopWatch.Reset ();
		StopWatch.Start ();
	}
	
	// Update is called once per frame
	void Update () {
		StopWatch.Stop ();
		double interval = StopWatch.Elapsed.TotalSeconds;
		if (interval > destroyAfterSeconds) {
			FoodStoreController.foodList.Remove (gameObject);
			Destroy (gameObject);
		} else {
			StopWatch.Start ();
		}
	}
	void OnTriggerEnter2D(Collider2D collider) {
		string fishId = collider.name;
		fishEatFood (collider.gameObject,fishId);

	}

	void fishEatFood(GameObject go, string fishid){
		// Ignore something not good
		if (fishid.Equals("FoodStore")){
			return;
		}
		int id;
		if (!int.TryParse (fishid, out id)) {
			Debug.Log ("ERROR : " + fishid);
			return;
		};
		// Step 1 modify food variable
		foreach (FishEntity entity in GenerateFish.fishList.fishes) {
			if (entity.id == id) {
				//Add size
				entity.size += 0.01f;
				GenerateFish.scaleForGameObject (go, entity);
				go.GetComponent<AudioSource> ().Play ();
				Destroy (gameObject);

			}
		}
	}


}
