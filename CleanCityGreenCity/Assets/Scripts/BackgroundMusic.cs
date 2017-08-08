using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BackgroundMusic : MonoBehaviour {

	private static BackgroundMusic instance = null;
	public static BackgroundMusic Instance {
		get { return instance; }
	}

	// Update is called once per frame
	void Update () {
		if ((instance != null && instance != this) && SceneManager.GetActiveScene().buildIndex == 8) {
			Destroy (this.gameObject);
			return;
		} else {
			instance = this;
		}


		DontDestroyOnLoad (this.gameObject);

	}


}
