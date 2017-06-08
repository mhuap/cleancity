using UnityEngine;
using System.Collections;

public class deleteRecyclable : MonoBehaviour {

	public int point = 1;

	// Use this for initialization
	void Start () {

	}

	void OnTriggerEnter (Collider other){
		if (other.gameObject.CompareTag("Recycling")){
			ScoreManager.score += point;
		} else {
			StrikeManager.strikes += 1;
		}
		Cursor.visible = true;
		Destroy(gameObject);
	}
}
