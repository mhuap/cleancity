using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ReplayIntro : MonoBehaviour {

	private Button button;

	// Use this for initialization
	void Start () {
		button = GetComponent<Button> ();
		button.onClick.AddListener (() => ClickToReplay ());
	}
	
	// Update is called once per frame
	public void ClickToReplay () {
		SceneManager.LoadScene ("Intro");
	}
}
