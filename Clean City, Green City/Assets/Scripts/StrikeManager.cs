using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class StrikeManager : MonoBehaviour {

	public static int strikes;
	public GameObject gameOverText;
	public GameObject resetText;

	Text text;
	Text strikeOut;

	void Awake(){
		strikes = 0;
		text = GetComponent <Text> ();
		strikeOut = gameOverText.GetComponent <Text> ();
	}

	void Update(){
		text.text = "strikes: " + strikes;
		if (strikes >= 3) {
			strikeOut.text = "Game Over!";
			resetText.SetActive (true);
			gameOverText.SetActive (true);
		}
	}
}
