using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class timer : MonoBehaviour {

	public float timeLeft = 30.0f;
	public GameObject gameOverText;
	Text text;

	// Use this for initialization
	void Start () {
	
		text = GetComponent <Text> ();
	}

	void Update()
	{
		if (!gameOverText.activeInHierarchy) {
			timeLeft -= Time.deltaTime;
			text.text = "time: " + Mathf.Ceil (timeLeft);
			if (timeLeft < 0) {
				gameOverText.SetActive (true);
			}
		}
	}
}
