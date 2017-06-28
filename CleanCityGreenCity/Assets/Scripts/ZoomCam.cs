using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZoomCam : MonoBehaviour
{	
	// Use this for initialization
	void Start ()
	{
		GetComponent<Camera> ().enabled = false;
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (CityControl.zoomActivated == "y") {
			GetComponent<Camera> ().enabled = true;
		}

		if (Input.GetKeyDown (KeyCode.Escape)) {
			GetComponent<Camera> ().enabled = false;
			CityControl.zoomActivated = "n";
		}
	}
}
