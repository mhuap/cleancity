using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class StrikeManager : MonoBehaviour
{

	public static int strikes;
	public GameObject gameOverText;
	public GameObject restartText;
	public bool restart;

	Text text;
	Text strikeOut;

	void Awake ()
	{
		strikes = 0;
		text = GetComponent <Text> ();
		strikeOut = gameOverText.GetComponent <Text> ();
	}

	void Update ()
	{
		text.text = "strikes: " + strikes;
		if (strikes >= 3) {
			strikeOut.text = "Game Over!";
			gameOverText.SetActive (true);
			restartText.SetActive (true);
			restart = true;
		}

		if (restart) {
			if (Input.GetKeyDown (KeyCode.R)) {
				Application.LoadLevel (Application.loadedLevel);
			}

		}
	}
}
