#include "pch.h"
#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// Воскресенский скейтбордист
	void Out(circle &C, ofstream &ofst)
	{
		ofst << "It is Circle: x = "
			<< C.x << ", y = " << C.y << ", R = " << C.R << ", Colour = " << C.colour << endl;
	}
} // end simple_shapes namespace