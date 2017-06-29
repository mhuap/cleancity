using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Game : MonoBehaviour {

	public GameObject setGameOverGroup;
	public string textName;
	public string textNameParent;

	static private GameObject gameOverGroup;
	static private string _textName;
	static private string _textNameParent;
	static private bool _status;

	// Use this for initialization
	void Start () {
		_status = false;
		gameOverGroup = setGameOverGroup;
		_textName = textName;
		_textNameParent = textNameParent;
	}
	
	// Update is called once per frame
	void Update () {
		if (gameOverGroup.activeInHierarchy) {
			_status = true;
		} else {
			_status = false;
		}
	}

	public static void End(){
		gameOverGroup.SetActive (true);
	}

	public static void StrikeOut( string strikeString){
		Transform t = gameOverGroup.transform;
		GameObject go = t.Find (_textNameParent).gameObject;
		t = go.transform;
		go = t.Find (_textName).gameObject;
		Text text = go.gameObject.GetComponent<Text> ();
		text.text = strikeString;
		End ();
	}

	/// <summary>
	/// Gets or sets value indicating whether this <see cref="Game"/> is over.
	/// </summary>
	/// <value><c>true</c> if status; otherwise, <c>false</c>.</value>
	static public bool status{
		get {return _status; }
	}

//	static GameObject FindObject(GameObject parent, string name)
//	{
//		Transform[] trs= parent.GetComponentsInChildren<Transform> (typeof(Transform), true);
//		foreach(Transform t in trs){
//			if(t.name == name){
//				return t.gameObject;
//			}
//		}
//		return null;
//	}
}
