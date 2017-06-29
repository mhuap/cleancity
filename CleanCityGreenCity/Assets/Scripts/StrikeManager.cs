using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class StrikeManager : MonoBehaviour
{

	public string strikeOutText;
	private char x = 'ø';
	private static int strikes;

	Text text; // strikes: counter text

	void Awake ()
	{
		strikes = 0;
		text = GetComponent <Text> ();
	}

	void Update ()
	{
		text.text = "strikes: " + new string(x, strikes);
		if (strikes >= 3) {
			Game.StrikeOut ( strikeOutText);
			Game.End ();
		}
	}

	static public void Strike(){
		if (strikes < 3) {
			strikes++;
		}
	}
}
