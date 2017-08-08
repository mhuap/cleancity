using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class OkayButtonScript : MonoBehaviour
{

	private Button ok;
	public GameObject panel;
	public GameObject panelText;


	// Use this for initialization
	void Start ()
	{
		ok = GetComponent<Button> ();
		ok.onClick.AddListener (() => ClickOk ());
	}
	
	// Update is called once per frame
	public void ClickOk ()
	{
		panel.SetActive (false);
		panelText.SetActive (false);
		this.gameObject.SetActive (false);
	}
}
