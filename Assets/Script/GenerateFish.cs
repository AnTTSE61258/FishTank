using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AssemblyCSharp;

public class GenerateFish : MonoBehaviour
{
	public static List<GameObject> fishOnScreen = new List<GameObject> ();
	public GameObject fish1;
	public GameObject fish2;
	public GameObject fish3;
	public GameObject fish4;
	public GameObject fish5;
	public static FishList fishList;

	// Use this for initialization
	void Start ()
	{

		// Get fish list from file;
		fishList = FileUtils.readFishList ();
		foreach (FishEntity entity in fishList.fishes) {
			switch (entity.fishType) {
			case 1:
				initFish (fish1, entity);
				break;
				
			case 2:
				initFish (fish2, entity);
				break;

			case 3:
				initFish (fish3, entity);
				break;

			case 4:
				initFish (fish4, entity);
				break;

			case 5: 
				initFish (fish5, entity);
				break;
			}
		}
	}

	void initFish (GameObject fish, FishEntity entity)
	{
		fish.name = entity.id.ToString();
		GameObject go = Instantiate (fish);
		scaleForGameObject (go, entity);
		go.name = entity.id.ToString();
		fishOnScreen.Add (go);
	}


	public static void scaleForGameObject(GameObject go, FishEntity entity){
		go.GetComponent<Transform> ().localScale = new Vector3 (entity.size, entity.size, -1);

	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}


	void OnApplicationQuit() {
		PlayerPrefs.SetString ("gamedata", JsonUtility.ToJson (fishList));
		PlayerPrefs.Save ();
		Debug.Log("Application ending after " + Time.time + " seconds" + JsonUtility.ToJson (fishList));
	}

}
