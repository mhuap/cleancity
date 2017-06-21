using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;

public class LoadLevel : MonoBehaviour {

	public EventSystem es;

	void Start(){
		es = EventSystem.current;
	}

	public void LoadStage()  {
		SceneManager.LoadScene(es.currentSelectedGameObject.tag);
	}
}
