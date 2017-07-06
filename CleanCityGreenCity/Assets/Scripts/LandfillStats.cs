using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LandfillStats : MonoBehaviour {

	private static int start = 3;
	private static int _prev = 0;
	private static int _curr = 0;

	void Awake () {
		_curr = start;
		DontDestroyOnLoad (transform.gameObject);
	}

	static public int prev {
		get { return _prev; }
	}

	static public int curr {
		get { return _curr; }
	}

	static public void Inc (){
		_curr++;
		print (_curr);
	}

	static public void End(){
		_prev += _curr;
		_curr = 0;
		start = 0;
	}

	static public void GameOver(){
		start = 3;
		_prev = 0;
		_curr = 0;
	}
}
