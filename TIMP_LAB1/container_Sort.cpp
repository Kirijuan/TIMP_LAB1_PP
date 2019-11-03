#include "pch.h"
#include "stdafx.h"
#include <fstream>
#include "container_atd.h"
using namespace std;
namespace simple_shapes {
	bool Compare(shape *first, shape *second);
	void Sort(container &c) {
		for (int i = 0; i < c.len - 1; i++) {
			for (int j = i + 1; j < c.len; j++) {
				if (Compare(c.cont[i], c.cont[j])) {
					shape *tmp = c.cont[i];
					c.cont[i] = c.cont[j];
					c.cont[j] = tmp;
				}
			}
		}
	}
}