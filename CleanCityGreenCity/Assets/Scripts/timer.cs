using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class timer : MonoBehaviour
{

	public float timeLeft = 30.0f;
	Text text;

	// Use this for initialization
	void Start ()
	{
		text = GetComponent <Text> ();
	}

	void Update ()
	{
		if (!Game.status) {
			timeLeft -= Time.deltaTime;
			text.text = "time: " + Mathf.Ceil (timeLeft);
			if (timeLeft < 0) {
				Game.End ();
			}
		}
			
	}
}
