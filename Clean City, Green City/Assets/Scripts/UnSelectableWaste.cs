using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnSelectableWaste : MonoBehaviour {

	public int numLeft;
	float distance = 1;

	private Vector3 screenPoint;
	private Vector3 offset;
	private float lockedYPos;
	private GameObject[] wastes;
	private bool enable;
	
	// Update is called once per frame
	void Update () {
		wastes = GameObject.FindGameObjectsWithTag ("waste");
		int n = wastes.Length;
		if (n == numLeft) {
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
