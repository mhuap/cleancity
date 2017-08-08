using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class FadeAway : MonoBehaviour {

	float duration = 20;
	
	// Update is called once per frame
	void Update () {
		if (Time.time > duration) {
			Destroy (gameObject);
			SceneManager.LoadScene ("Tutorial");
		}

		Text text = GetComponent<Text> ();
		Color myColour = text.color;
		float ratio = Time.time / duration;
		myColour.a = Mathf.Lerp (1, 0, ratio);
		text.color = myColour;

	}
}
