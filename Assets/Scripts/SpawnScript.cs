 using UnityEngine;
using System.Collections;

public class SpawnScript : MonoBehaviour {
	public GameObject[] obj;
	public float SpawnMin = 2f;
	public float SpawnMax = 2f; 
	// Use this for initialization
	void Start () {
		spawn ();
	
	}
	void spawn(){
	
		Instantiate (obj [Random.Range (0, obj.GetLength (0))], transform.position, Quaternion.identity); 
		Invoke ("spawn", Random.Range (SpawnMin, SpawnMax));
	
	}

}
