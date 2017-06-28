using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trash : Waste {

	protected bool recycle = false;
	protected bool compost = false;
	protected bool trash = true;

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

