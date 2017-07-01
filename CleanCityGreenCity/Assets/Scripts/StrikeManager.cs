using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class StrikeManager : MonoBehaviour
{
	private static int strikes;

	Text text; // strikes: counter text

	void Awake ()
	{
		strikes = 0;
	}

	void Start(){
		strikes = 0;
	}
		

	static public void Strike(){
			strikes++;
	}
}
