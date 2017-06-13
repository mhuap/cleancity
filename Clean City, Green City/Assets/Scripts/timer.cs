using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class timer : MonoBehaviour
{

	public float timeLeft = 30.0f;
	public GameObject gameOverText;
	public GameObject restartText;
	public bool restart;
	Text text;

	// Use this for initialization
	void Start ()
	{
		text = GetComponent <Text> ();
		restart = false;
	}

	void Update ()
	{
		if (!gameOverText.activeInHierarchy && !restartText.activeInHierarchy) {
			timeLeft -= Time.deltaTime;
			text.text = "time: " + Mathf.Ceil (timeLeft);
			if (timeLeft < 0) {
				gameOverText.SetActive (true);
				restartText.SetActive (true);
				restart = true;
			}
		}

		if (restart) {
			if (Input.GetKeyDown (KeyCode.R)) {
				Application.LoadLevel (Application.loadedLevel);
			}
		}
	}
}
