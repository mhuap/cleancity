using UnityEngine;
using System.Collections;

public class WasteGenerator : MonoBehaviour {

	public int count = 20;
	public float waitTime = 5f;
	public int numCoords = 14;

	public GameObject wastePrefab;
	public Vector3[] coords;
	public Sprite[] recycleSprites; // 6 sprites
	public Sprite[] trashSprites; // 5 sprites
	public Sprite[] compostSprites; // 5 sprites
	public GameObject gameOverText;

	// Use this for initialization
	void Start () {

		StartCoroutine (Generate ());
	

	}

	IEnumerator Generate(){
		while (count > 0 && !gameOverText.activeInHierarchy) {
			Sprite newSprite;
			Waste waste;
			GameObject wasteObj;

			Vector3 position = coords [Random.Range (0, numCoords)];
			int n = Random.Range (0, 4);

			if (n == 0) {
				// compost only
				int s = Random.Range(0, 5);
				newSprite = compostSprites [s];
				waste = new Compost ();
			} else if (n == 1) {
				// recyclable only
				int s = Random.Range(0, 6);
				newSprite = recycleSprites [s];
				waste = new Recyclable ();
			} else if (n == 2) {
				// trash only
				int s = Random.Range(0, 5);
				waste = new Trash();
				newSprite = trashSprites[s];
			} else {
				// n == 3
				// compost and recyclables
				int rand = Random.Range (0, 2);
				waste = new compostAndRecycle ();
				if (rand == 0) {
					// pick sprite from recyclable
					int s = Random.Range(4, 6);
					newSprite = recycleSprites [s];
				} else {
					// pick sprite from compost
					int s = Random.Range(0, 3);
					newSprite = compostSprites[s];
				}
			}
			wasteObj = wastePrefab;
			wasteComponent wc = wasteObj.GetComponent<wasteComponent> ();
			wc.waste = waste;
			wc.UpdateValues ();
			SpriteRenderer oldSprite = wasteObj.GetComponent<SpriteRenderer> ();
			oldSprite.sprite = newSprite;
			yield return new WaitForSeconds (waitTime);
			Instantiate (wasteObj, position, Quaternion.identity);
			count--;
		}

	}
			

}
