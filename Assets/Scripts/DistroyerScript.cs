 using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class DistroyerScript : MonoBehaviour {

	// Use this for initialization


	void OnTriggerEnter2D(Collider2D other ){
		if (other.tag == "Player") {
			SceneManager.LoadScene (2);
			return;
		}
		if (other.gameObject.transform.parent) {
			Destroy (other.gameObject.transform.parent.gameObject);
		} else {
		
			Destroy (other.gameObject);
		}
	 }
	 
}
