using UnityEngine;
using System.Collections;

public class deleteTrash : MonoBehaviour {

	public int point = 1;

	// Use this for initialization
	void Start () {
	
	}
	
	void OnTriggerEnter (Collider other){
		if (other.gameObject.CompareTag("Trash")){
			ScoreManager.score += point;
		} else {
			StrikeManager.strikes += 1;
		}
		Cursor.visible = true;
		Destroy(gameObject);
	}

}
