using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LandfillBar : MonoBehaviour {

	public Sprite[] blankSprites;
	public Sprite[] fillSprites;
	public Sprite[] dangerSprites;
	public int numBars = 10;

	private static int prevFillNum = 0;
	private static int _fillNumber;
	private int oldNum;
	private Sprite[] setSprites;
	private bool leftBlank;
	private bool rightBlank;
	private bool danger;
	private Transform barLeftEnd;
	private Transform barRightEnd;
	private Transform[] barPieces;

	void Awake(){
		_fillNumber = 4;
	}

	// Use this for initialization
	void Start () {
		// fillNumber
		if (_fillNumber < 0 || _fillNumber > 12) {
			throw new UnityException ();
		}

		// Ends of bar
		Transform t = this.transform;
		barLeftEnd = t.Find ("left");
		barRightEnd = t.Find ("right");

		// Middle of bar
		barPieces = new Transform[numBars];
		for (int i = 0; i < numBars; i++) {
			barPieces [i] = t.Find ("w" + i);
		}

		// check whether to be blank or red
		leftBlank = _fillNumber == 0;
		rightBlank = _fillNumber < 12;
		danger = _fillNumber >= 9;

		// initialize sprite array with blank sprites
		setSprites = new Sprite[3];
		for (int i = 0; i < 3; i++) {
			setSprites [i] = blankSprites [i];
		}

		SetSprites ();
		GenEnd ('L');
		GenMiddle ();
		GenEnd ('R');
	}

	void SetSprites(){
		if (!leftBlank) {
			if (danger) {
				setSprites [0] = dangerSprites [0];
			} else {
				setSprites [0] = fillSprites [0];
			}
		}
		if (!rightBlank) {
			if (danger) {
				setSprites [2] = dangerSprites [2];
			} else {
				setSprites [2] = fillSprites [2];
			}
		}

		if (danger) {
			setSprites [1] = dangerSprites [1];
		} else {
			setSprites [1] = fillSprites [1];
		}
			
	}
		

	void GenEnd(char end){
		Transform barEnd;
		int i;
		if (end == 'L') {
			barEnd = barLeftEnd;
			i = 0;
		} else if (end == 'R') {
			barEnd = barRightEnd;
			i = 2;
		} else {
			throw new UnityException ();
		}
		
		foreach (Transform t in barEnd) {
			GameObject g = t.gameObject;
			SpriteRenderer sr = g.GetComponent<SpriteRenderer> ();
			if (g.tag == "barEnd") {
				sr.sprite = setSprites [i];
			} else {
				if ((i == 2 && rightBlank) || i == 0 && leftBlank) {
					sr.sprite = blankSprites [1];
				} else {
					sr.sprite = setSprites [1];
				}
			}
		}
	}

	void GenMiddle(){
		for (int i = 0; i < barPieces.Length; i++) {
			if (i < _fillNumber) {
				foreach (Transform t in barPieces[i]) {
					SpriteRenderer sr = t.gameObject.GetComponent<SpriteRenderer> ();
					sr.sprite = setSprites [1];
				}
			}
		}
			
	}

	public static void Inc(){
		prevFillNum = _fillNumber;
		_fillNumber++;
	}
}
