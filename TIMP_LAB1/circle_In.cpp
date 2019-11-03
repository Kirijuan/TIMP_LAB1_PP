#include "pch.h"
#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// Выезд из дома и др. //
	void In(circle &C, ifstream &ifst)
	{
		ifst >> C.x >> C.y >> C.R >> C.colour;
	}
} // end simple_shapes namespace