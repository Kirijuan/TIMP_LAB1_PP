#include "pch.h"
#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// ����� ���������� ����� � �����
	void Out(circle &t, ofstream &ofst)
	{
		ofst << "It is Circle: x = "
			<< t.x << ", R = " << t.R << ", Colour = " << t.colour << endl;
	}
} // end simple_shapes namespace