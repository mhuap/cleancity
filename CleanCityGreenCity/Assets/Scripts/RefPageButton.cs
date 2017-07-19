using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class RefPageButton : MonoBehaviour {

	private Button goToRef;

	// Use this for initialization
	void Start ()
	{
		goToRef = GetComponent<Button> ();
		goToRef.onClick.AddListener (() => ClickRefButton ());
	}

	// Update is called once per frame
	public void ClickRefButton ()
	{
		SceneManager.LoadScene ("Reference");
	}
}
