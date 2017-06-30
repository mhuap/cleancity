using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialBins : MonoBehaviour {

	public Sprite cross;
	public Sprite check;

	private bool drop;
	private List<char> bins =  new List<char> (new char[]{'C', 'R', 'T'});
	private char binType;
	private SpriteRenderer sr;
	private Sprite oldSprite;
	private Sprite newSprite;
	private GameObject waste;
	private bool changeSprite;

	void Start(){
		sr = gameObject.GetComponent<SpriteRenderer> ();
		oldSprite = sr.sprite;
		binType = gameObject.tag [0];
		if (!bins.Contains (binType)) {
			throw new System.ArgumentException ("Invalid binType", "binType");
		}
	}

	void OnTriggerEnter (Collider other){
		// other is waste being dragged into bins

		waste = other.gameObject;
		wasteComponent wc = waste.GetComponent<wasteComponent>();
		bool rPoint = binType == 'R' && wc.r;
		bool cPoint = binType == 'C' && wc.c;
		bool tPoint = binType == 'T' && wc.t;

		if (rPoint || cPoint || tPoint) {	
			newSprite = check;
			drop = true;
		} else {
			newSprite = cross;
		}

		sr.sprite = newSprite;

	}

	void OnTriggerStay (Collider other) {
		changeSprite = true;
	}

	void Update(){
		if (Input.GetMouseButtonUp (0)) {
			if (drop) {
				Cursor.visible = true;
				Destroy (waste);
			}
			sr.sprite = oldSprite;
			drop = false;
		} else if (Input.GetMouseButtonDown (0)) {
			if (changeSprite) {
				sr.sprite = newSprite;
			}
		}
	}

	void OnTriggerExit(){
		sr.sprite = oldSprite;
		drop = false;
		changeSprite = false;
	}
		
}
