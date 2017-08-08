using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameOverSound : MonoBehaviour {
	
	private static GameOverSound instance = null;
	public static GameOverSound Instance {
		get { return instance; }
	}

	// Update is called once per frame
	void Update () {
		if (instance != null && instance != this) {
			Destroy (this.gameObject);
			return;
		} else {
			instance = this;
		}
	}
}
