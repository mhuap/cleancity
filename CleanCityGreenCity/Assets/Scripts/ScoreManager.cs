using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreManager : MonoBehaviour {

	public static int score;        // The player's score
	public static int pointInc = 1;

	Text text;                      // Reference to the Text component.

	void Awake ()
	{
		// Set up the reference.
		text = GetComponent <Text> ();

		// Reset the score.
		score = 0;
	}


	void Update ()
	{	if (!Game.status) {
			// Set the displayed text to be the word "Score" followed by the score value.
			text.text = "score: " + score;
		}
	}

	static public void IncScore(){
		score += pointInc;
	}
}
