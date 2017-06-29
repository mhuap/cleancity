using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ExitGame : MonoBehaviour
{

	private Button exit;

	void Start ()
	{
		exit = GetComponent<Button> ();
		exit.onClick.AddListener (() => ClickExit ());
	}
	
	// Update is called once per frame
	public void ClickExit ()
	{
		// when button is pressed, game exits
		Application.Quit ();
	}
}
