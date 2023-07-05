#pragma once

class EquilateralTriangle : public Triangle // ����� �������������� �����������
{
public:
	EquilateralTriangle() {
		figure_name = "�������������� �����������";
		side_a = side_b = side_c = 30;
		corner_A = corner_B = corner_C = 60;
	}

	EquilateralTriangle(int side_c, int corner_C) {
		side_a = side_b = side_c = 0;
		corner_A = corner_B = corner_C = 0;
	}
};
