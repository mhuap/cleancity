using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TextAnimation : MonoBehaviour
{

	public float typeDelay = 0.04f;
	public string fullText1;
	public string fullText2;
	public string fullText3;
	public string fullText4;
	public string fullText5;
	private string currentText1 = "";
	private string currentText2 = "";
	private string currentText3 = "";
	private string currentText4 = "";
	private string currentText5 = "";


	// Use this for initialization
	void Start ()
	{
		StartCoroutine (ShowText1 ());

	}

	// Update is called once per frame
	void Update ()
	{

	}

	IEnumerator ShowText1 ()
	{
		for (int i = 0; i < fullText1.Length; i++) {
			currentText1 = fullText1.Substring (0, i);
			this.GetComponent<Text> ().text = currentText1;
			yield return new WaitForSeconds (typeDelay);

		}
		yield return new WaitForSeconds (1.75f);
		currentText1 = "";
		yield return StartCoroutine (ShowText2 ());

	}

	IEnumerator ShowText2 ()
	{
		for (int i = 0; i < fullText2.Length; i++) {
			currentText2 = fullText2.Substring (0, i);
			this.GetComponent<Text> ().text = currentText2;
			yield return new WaitForSeconds (typeDelay);

		}
		yield return new WaitForSeconds (1.75f);
		currentText2 = "";
		yield return StartCoroutine (ShowText3 ());

	}

	IEnumerator ShowText3 ()
	{
		for (int i = 0; i < fullText3.Length; i++) {
			currentText3 = fullText3.Substring (0, i);
			this.GetComponent<Text> ().text = currentText3;
			yield return new WaitForSeconds (typeDelay);

		}
		yield return new WaitForSeconds (1.75f);
		currentText3 = "";
		yield return StartCoroutine (ShowText4 ());


	}

	IEnumerator ShowText4 ()
	{
		for (int i = 0; i < fullText4.Length; i++) {
			currentText4 = fullText4.Substring (0, i);
			this.GetComponent<Text> ().text = currentText4;
			yield return new WaitForSeconds (typeDelay);

		}
		yield return new WaitForSeconds (1.75f);
		currentText4 = "";
		yield return StartCoroutine (ShowText5 ());


	}

	IEnumerator ShowText5 ()
	{
		for (int i = 0; i < fullText5.Length; i++) {
			currentText5 = fullText5.Substring (0, i);
			this.GetComponent<Text> ().text = currentText5;
			yield return new WaitForSeconds (typeDelay);

		}
		yield return new WaitForSeconds (1.75f);
		currentText5 = "";
		SceneManager.LoadScene ("Tutorial");
	}




}
