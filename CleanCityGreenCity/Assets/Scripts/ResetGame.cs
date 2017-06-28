using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ResetGame : MonoBehaviour
{

	private Button reset;

	// Use this for initialization
	void Start ()
	{
		reset = GetComponent<Button> ();
		reset.onClick.AddListener (() => Reset());
	}
	
	// Update is called once per frame
	public void Reset ()
	{
		SceneManager.LoadScene (SceneManager.GetActiveScene ().buildIndex);
	}
}
