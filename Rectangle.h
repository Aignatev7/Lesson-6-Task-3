#pragma once

class Rectangle : public Quadrangle// ����� �������������
{
public:
	Rectangle() {
		figure_name = "�������������";
		side_a = side_c = 10;
		side_b = side_d = 20;
		corner_A = corner_B = corner_C = corner_D = 90;
	}

	Rectangle(int side_c, int side_d, int corner_D) {
		side_a = side_c = 0;
		side_b = side_d = 0;
		corner_A = corner_B = corner_C = corner_D = 0;
	}
};