using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuScript : MonoBehaviour {
	public GameObject gamePlayScene;
	// Use this for initialization
	void Start () {
		Debug.Log ("start script");
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnMouseDown(){
		Debug.Log ("game start");
		UnityEngine.SceneManagement.SceneManager.LoadScene (1);
	}
}
