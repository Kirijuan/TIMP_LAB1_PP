#include "pch.h"
#include "stdafx.h"
#include <fstream>
#include "rectangle_atd.h"
using namespace std;
namespace simple_shapes {
	// ���� ���������� �������������� �� �����
	void In(rectangle &r, ifstream &ifst) {
		ifst >> r.x >> r.y >> r.colour;
	}
} // end simple_shapes namespace