using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartGame : MonoBehaviour
{

	private Button start;

	// Use this for initialization
	void Start ()
	{
		start = GetComponent<Button> ();
		start.onClick.AddListener (() => Start ());
	}
	
	// Update is called once per frame
	public void ClickStart ()
	{
		SceneManager.LoadScene ("Tutorial");
	}
}
