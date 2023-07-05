#pragma once

class IsoscelesTriangle : public Triangle // класс Равнобедренный треугольник
{
public:
	IsoscelesTriangle() {
		figure_name = "Равнобедренный треугольник";
		side_a = side_c = 10;
		corner_A = corner_C = 50;
	}

	IsoscelesTriangle(int side_b, int side_c, int corner_B, int corner_C) {
		side_a = side_c = 0;
		side_b = 0;
		corner_A = corner_C = 0;
		corner_B = 0;
	}
};
