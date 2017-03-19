using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AssemblyCSharp;

public class ScreenScale : MonoBehaviour {
		
	public float screenFactor = 8.0f;
	// Use this for initialization
	void Start () {
		Camera.main.orthographicSize = screenFactor * Screen.height / Screen.width * 0.5f;
		Screen.orientation = ScreenOrientation.LandscapeLeft;

	}
	
	// Update is called once per frame
	void Update () {
		
	}


}
