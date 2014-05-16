using UnityEngine;
using Syatem.Collections;

public class CameraController :MonoBehaviour{



	public GameObject player;
	private Vector3 offset;

	//use this for initialization

	void Start()
	{
		offset=transform.position;

	}

	//update is called once per frame
 	void LateUpdate()
	{
		transform.position=player.transform.position+offset;
	}

}
