using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Compost : Waste {

	protected bool compost = true;
	protected bool recycle = false;
	protected bool trash = false;

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
