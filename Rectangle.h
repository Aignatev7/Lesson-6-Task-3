#pragma once
#include "Quadrangle.h"

class Rectangle : public Quadrangle// ����� �������������
{
public:
	Rectangle();

	Rectangle(int side_c, int side_d, int corner_D);
};