using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreManager : MonoBehaviour {

	private static int wasteLeft;        // The player's score
	public static int pointInc = 1;

	Text text;                      // Reference to the Text component.

	void Start ()
	{
		// Set up the reference.
		text = GetComponent <Text> ();

		// Reset the score.
		wasteLeft = WasteGenerator.Count;
	}


	void Update ()
	{
		if (!Game.status) {
			// Set the displayed text to be the word "Score" followed by the score value.
			text.text = "waste left: " + wasteLeft;
			if (wasteLeft == 0) {
				Game.End ();
			}
		}
	}

	static public void Change (){
		wasteLeft --;
	}
}
