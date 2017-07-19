using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class BackToGame : MonoBehaviour {


	private Button btg;

	// Use this for initialization
	void Start () {
		btg = GetComponent<Button> ();
		btg.onClick.AddListener (() => ClickBackToGame ());
	}
	
	// Update is called once per frame
	public void ClickBackToGame () {
		SceneManager.LoadScene ("altLevel1");
	}
}
