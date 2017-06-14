using UnityEngine;
using System.Collections;

public class WasteGenerator : MonoBehaviour {

	public int count = 20;
	public float waitTime = 5f;
	public Vector3[] coords;
	public GameObject[] waste;
	public Sprite[] recycleSprites;
	public Sprite[] wasteSprites;
	public Sprite[] compostSprites;
	public int size = 14;
	public GameObject gameOverText;

	// Use this for initialization
	void Start () {


		StartCoroutine (Generate ());

	}

	IEnumerator Generate(){
		while (count > 0 && !gameOverText.activeInHierarchy) {
			Vector3 position = coords [Random.Range (0, size)];
			int n = Random.Range (0, 3);
			GameObject wasteType = waste [n];
			if (n == 0) {
				// compost
				wasteType.GetComponent<SpriteRenderer> ();

			} else if (n == 1) {
				// recyclable
			} else if (n == 2) {
				// waste
			}
			yield return new WaitForSeconds (waitTime);
			Instantiate (wasteType, position, Quaternion.identity);
			count--;
		}

	}
			

}
