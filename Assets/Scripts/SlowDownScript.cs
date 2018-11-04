using UnityEngine;
using System.Collections;

public class SlowDownScript : MonoBehaviour {

	public float TimeCount;
	public GameObject slowobj;
	public HUDScript hudobj;
	//private float initime = 0.0f;
	//private float xrun;
	//
	void OnTriggerEnter2D(Collider2D  other){
	//	initime = Time.deltaTime;
		SlowDown ();

	
	}
	public void SlowDown(){
		Destroy (slowobj);
		//slowdownpicked = true;
		Time.timeScale = 0.5f;
		PlayerPrefs.SetInt ("slowdownpicked", 1);
	
	}


}
