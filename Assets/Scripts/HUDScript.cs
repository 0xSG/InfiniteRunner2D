using UnityEngine;
using System.Collections;
using UnityEngine.UI;
//using UnityEngine.Advertisements;
public class HUDScript : MonoBehaviour {
	

	public float PlayerScore = 0f;
	public bool EscOn = false;//ESCAPE STATUS
	private float xrun;
	public GameObject playerposition;
	public GameObject slowobj;
	private float timecount = 0.0f;
	public Text scoretext;
	int esccount;

	public bool slowdownpicked=false;
	void Start(){
		Time.timeScale = 1.0f;
		PlayerPrefs.SetInt ("slowdownpicked", 0);
		esccount = 0;
	}
	// Update is called once per frame
	void Update () {
		PlayerScore += Time.deltaTime * 100;
	
		// ECSCAPE FUNCTION......
		if(Input.GetKeyUp(KeyCode.Escape)){
			Debug.ClearDeveloperConsole ();

			if(EscOn)
			{
				
				//Debug.Log ("ESC OFF");
				Time.timeScale = 1.0f;
				EscOn = false;

			}
			else
			{
				//Debug.Log ("ESC ON");
				esccount++;


				Time.timeScale = 0.0f;
				EscOn = true;
				if (esccount == 3) {
					Debug.Log ("Ads");// SHOW ADS 
					esccount = 0;
				}

			}

		}
		if(Input.GetKey(KeyCode.RightArrow)){

			Time.timeScale = 1.0f;
		}

		scoretext.text = "Score:" + (int)((PlayerScore * .1f));

		if(PlayerPrefs.GetInt("slowdownpicked")==1){
		timecount+=Time.deltaTime * 10;
		Debug.Log (timecount);

		if (timecount>20 ) {
			Debug.Log ("Yap1");
			Time.timeScale = 0.6f;
		}
		if (timecount>30 ) {
			Debug.Log ("Yap2");
			Time.timeScale = .7f;
		}

		if (timecount>40 ) {
			Debug.Log ("Yap3");
			Time.timeScale = 0.8f;
		}
		if (timecount>50 ) {
			Debug.Log ("Yap4");
			Time.timeScale = 0.9f;
		}
		if (timecount>60 ) {
			Debug.Log ("Yap5");
			Time.timeScale = 1.0f;
			PlayerPrefs.SetInt ("slowdownpicked", 0);
		}
		}

		//xrun = playerposition.transform.position.x - slowobj.transform.position.x;
		//xrun=1.0f*Time.deltaTime;
		//if(Time.deltaTime){

		//	Time.timeScale = 1.0f;
		//}




	}
	public void ScoreIncreases(int amount){
	
		PlayerScore += amount;
	}
	void OnDisable(){
		
		PlayerPrefs.SetInt ("Score", (int)(PlayerScore * .1f));
		int scorepref = PlayerPrefs.GetInt ("Score");
		int hscorepref = PlayerPrefs.GetInt ("highscore");
		if(scorepref>hscorepref){
			PlayerPrefs.SetInt ("highscore",scorepref);
		}
	}
	/*void OnGUI(){
		
		GUI.Label (new Rect (10, 10, 100, 30), "Score:" + (int)((PlayerScore * .1f)));

	}*/


}



