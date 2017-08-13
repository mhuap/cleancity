using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;

public class SkipIntro : MonoBehaviour {

	private Button skip;

	// Use this for initialization
	void Start () {
		skip = GetComponent<Button> ();
		skip.onClick.AddListener (() => ClickToSkip ());
	}
	
	// Update is called once per frame
	public void ClickToSkip () {
		SceneManager.LoadScene ("Tutorial");
	}
}
