using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class clickAndDrag : MonoBehaviour {

	public int numLeft;

	private float distance = 1;
	private float lockedYPos;
	private Vector3 screenPoint;
	private Vector3 offset;
	private GameObject[] wastes;
	private bool enable;

	void Update(){
		SetEnable ();
	}

	void OnMouseDrag() {
		if (enable) {
			Vector3 screenPosition = new Vector3 (Input.mousePosition.x, Input.mousePosition.y, distance);
			Vector3 objectPos = Camera.main.ScreenToWorldPoint (screenPosition) + offset;
			transform.position = objectPos;
		}
	}

	void OnMouseDown(){
		if (enable) {
			offset = gameObject.transform.position - Camera.main.ScreenToWorldPoint (new Vector3 (Input.mousePosition.x, Input.mousePosition.y, 0));
			offset.z = 2;
			Cursor.visible = false;
		}
	}

	void OnMouseUp(){
		Cursor.visible = true;
	}

	bool TutorialEnable(){
		wastes = GameObject.FindGameObjectsWithTag ("waste");
		return wastes.Length == numLeft;
	}

	bool LevelsEnable(){
		return !Game.status;
	}

	void SetEnable(){
		if (SceneManager.GetActiveScene ().name == "Tutorial") {
			enable = TutorialEnable ();
		} else {
			enable = LevelsEnable ();
		}
	}
}