using UnityEngine;
using System.Collections;

[System.Serializable]
public class Recyclable : Waste {

	protected bool recycle = true;
	protected bool trash = false;
	protected bool compost = false;

	public override bool getR {
		get { return this.recycle; }
	}

	public override bool getC {
		get { return this.compost; }
	}

	public override bool getT {
		get { return this.trash; }
	}
}
