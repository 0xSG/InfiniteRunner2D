using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainMenuScript : MonoBehaviour {

	public Canvas quitbx;
	public Button startbtn;
	public Button quitbtn;
	public Text hstext;
	// Use this for initialization
	void Start () {
		quitbx.enabled = false;
		nopress ();
		hstext.text="High Score:"+PlayerPrefs.GetInt("highscore");
	
	}

	public void nopress(){
		quitbx.enabled = false;
		startbtn.enabled = true;
		quitbtn.enabled = true;
	}
	public void startpress(){
	
		SceneManager.LoadScene (1);
	}
	public void quitpress(){
	
		quitbx.enabled = true;
		startbtn.enabled = false;
		quitbtn.enabled = false;
	
	}
	public void yespress(){
		Application.Quit ();
	}
}
