using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
//using UnityEngine.Advertisements;

public class GameOverScript : MonoBehaviour {
	public Text scoretext;
	public Text Hscoretext;
	int score;
	int hscore;
	// Use this for initialization
	void Start () {


		score = 0;
		hscore=0;
		score = PlayerPrefs.GetInt ("Score");
		hscore=PlayerPrefs.GetInt("highscore");
		scoretext.text = "Score:" + score;
		Hscoretext.text="High Score:"+hscore;
	}
	public void playagainpress(){
	
		SceneManager.LoadScene (1);
	
	}
	public void exitpress(){
		

		SceneManager.LoadScene (0);

	}
	void Update () {
		if (Input.GetKey (KeyCode.Space)) {
			SceneManager.LoadScene (1);
		}
	}
}
