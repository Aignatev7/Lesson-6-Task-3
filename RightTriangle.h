#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle // ����� ������������� �����������
{
public:
	RightTriangle();

	RightTriangle(int side_a, int side_b, int side_c, int corner_A, int corner_B);
};