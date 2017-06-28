using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class deleteWaste : MonoBehaviour {

	public int point = 1;
	public string binType = "Z";

	private List<string> bins =  new List<string> (new string[]{"C", "R", "T"});

	// Use this for initialization
	void Start () {
		if (!bins.Contains (binType)) {
			throw new System.ArgumentException ("Invalid binType", "binType");
		}
			
	}

	void OnTriggerEnter (Collider other){
		// other is waste being dragged into bins

		wasteComponent wc = other.gameObject.GetComponent<wasteComponent>();
		bool rPoint = binType == "R" && wc.r;
		bool cPoint = binType == "C" && wc.c;
		bool tPoint = binType == "T" && wc.t;

		if (rPoint || cPoint || tPoint) {
			ScoreManager.score += point;
		} else {
			StrikeManager.strikes += 1;
		}
		Cursor.visible = true;
		Destroy(other.gameObject);
	}
		
}
