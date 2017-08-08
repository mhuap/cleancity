using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MapToLevel : MonoBehaviour {

	private bool change = false;
	// Use this for initialization
	void Start () {
		
	}

	void OnMouseDown(){
		change = true;
	}

	void OnMouseUp(){
		if (change) {
			SceneManager.LoadScene("LandfillScene");
		}
		change = false;
	}
}
