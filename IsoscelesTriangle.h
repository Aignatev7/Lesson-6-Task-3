#pragma once
#include "Triangle.h"

class IsoscelesTriangle : public Triangle // ����� �������������� �����������
{
public:
	IsoscelesTriangle();

	IsoscelesTriangle(int side_b, int side_c, int corner_B, int corner_C);
};
