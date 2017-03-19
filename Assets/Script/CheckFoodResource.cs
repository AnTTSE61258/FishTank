using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckFoodResource : MonoBehaviour {
	static string FOOD_COUNT = "foodcount";
	static string LAST_UPDATE_FOODCOUNT = "lastupdatefoodcount";
	public static int foodCount = 0;
	// Use this for initialization
	void Start () {
		PlayerPrefs.DeleteAll ();
		InvokeRepeating("check", 0.0f, 2.0f);
		if (!PlayerPrefs.HasKey (FOOD_COUNT)) {
			foodCount = 5;
			saveFoodCountToPlayerPref ();
		} else {
			foodCount = PlayerPrefs.GetInt (FOOD_COUNT);
			countPlus ();
			Debug.Log ("food count" + foodCount);
		}
		InvokeRepeating ("check", 10, 20);
	}

	private void countPlus(){
		long lastTimeUpdate = long.Parse(PlayerPrefs.GetString(LAST_UPDATE_FOODCOUNT));
		long interval = System.DateTime.Now.Ticks/System.TimeSpan.TicksPerSecond - lastTimeUpdate;
		if (interval > 60) {
			long plusValue = (int)interval / 60;
			foodCount += (int)plusValue;
			saveFoodCountToPlayerPref ();
		}
	}

	public static void saveFoodCountToPlayerPref(){
		PlayerPrefs.SetInt (FOOD_COUNT, foodCount);
		long lastTimeUpdate = System.DateTime.Now.Ticks / System.TimeSpan.TicksPerSecond;
		PlayerPrefs.SetString (LAST_UPDATE_FOODCOUNT, lastTimeUpdate + "");
		PlayerPrefs.Save ();
	}
	// Update is called once per frame
	void Update () {
	}

	void check(){
		countPlus ();
	}
}
