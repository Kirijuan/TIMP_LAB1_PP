#include "pch.h"
#include "stdafx.h"
#include <fstream>
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// ���� ���������� ����� �� ������
	void In(circle &t, ifstream &ifst)
	{
		ifst >> t.a >> t.b >> t.colour;
	}
} // end simple_shapes namespace