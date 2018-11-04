 using UnityEngine;
using System.Collections;

public class PowerUpScript : MonoBehaviour {

	// Use this for initialization
	HUDScript hud;

	void OnTriggerEnter2D(Collider2D  other){

		if(other.tag=="Player"){

			hud = GameObject.Find ("Main Camera").GetComponent<HUDScript> ();
			hud.ScoreIncreases (1000);
			Destroy (this.gameObject);

		}
	} 
}
