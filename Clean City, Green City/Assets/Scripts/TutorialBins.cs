using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialBins : MonoBehaviour {

	public Sprite cross;
	public Sprite check;
	public string binType = "Z";

	private bool drop;
	private List<string> bins =  new List<string> (new string[]{"C", "R", "T"});
	private SpriteRenderer sr;
	private Sprite oldSprite;
	private Sprite newSprite;
	private GameObject waste;

	void Start(){
		sr = gameObject.GetComponent<SpriteRenderer> ();
		oldSprite = sr.sprite;
		if (!bins.Contains (binType)) {
			throw new System.ArgumentException ("Invalid binType", "binType");
		}
	}

	void OnTriggerEnter (Collider other){
		// other is waste being dragged into bins

		waste = other.gameObject;
		wasteComponent wc = waste.GetComponent<wasteComponent>();
		bool rPoint = binType == "R" && wc.r;
		bool cPoint = binType == "C" && wc.c;
		bool tPoint = binType == "T" && wc.t;

		if (rPoint || cPoint || tPoint) {	
			newSprite = check;
			drop = true;
		} else {
			newSprite = cross;
		}

		sr.sprite = newSprite;

	}

	void Update(){
		if (drop && Input.GetMouseButtonUp (0)) {
			Cursor.visible = true;
			sr.sprite = oldSprite;
			Destroy (waste);
		}
	}

	void OnTriggerExit(){
		sr.sprite = oldSprite;
		drop = false;
	}
		
}
