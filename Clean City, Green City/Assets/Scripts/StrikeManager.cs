using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class StrikeManager : MonoBehaviour
{

	public static int strikes;
	public string strikeOutText;
	public GameObject gameOverText;
	public GameObject restartText;
	private bool restart;

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
			strikeOut.text = strikeOutText;
			gameOverText.SetActive (true);
			restartText.SetActive (true);
			restart = true;
		}

		if (restart) {
			if (Input.GetKeyDown (KeyCode.R)) {
				SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
			}

		}
	}
}
