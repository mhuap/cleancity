using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wasteComponent : MonoBehaviour {
	public Waste waste;
	public bool r;
	public bool c;
	public bool t;

	public void UpdateValues(){
		r = waste.getR;
		c = waste.getC;
		t = waste.getT;
	}

}
