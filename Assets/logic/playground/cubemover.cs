using UnityEngine;
using System.Collections;

public class cubemover : MonoBehaviour {

	// Use this for initialization
	void Start () {
		print ("foo");
	}
	
	// Update is called once per frame
	void Update () {
		transform.Translate(Input.GetAxis("Horizontal") * Time.deltaTime, 0, 0);
	}
}
