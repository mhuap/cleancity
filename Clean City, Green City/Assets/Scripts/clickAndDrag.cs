using UnityEngine;
using UnityEngine.UI;
using System.Collections;


public class clickAndDrag : MonoBehaviour {

	public GameObject gameOverText;
	float distance = 1;
	private Vector3 screenPoint;
	private Vector3 offset;
	private float lockedYPos;
	private bool enable;

	void Update(){
		if (gameOverText.activeInHierarchy) {
			enable = false;
			print (enable);
		} else {
			enable = true;
		}
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
			offset.z = 0;
			Cursor.visible = false;
		}
	}

	void OnMouseUp(){
		Cursor.visible = true;
	}




}