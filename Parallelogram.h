#pragma once

class Parallelogram : public Rectangle // класс Параллелограмм
{
public:
	Parallelogram() {
		figure_name = "Параллелограмм";
		side_a = side_c = 20;
		side_b = side_d = 30;
		corner_A = corner_C = 30;
		corner_B = corner_D = 40;
	}

	Parallelogram(int side_c, int side_d, int corner_C, int corner_D) {
		side_a = side_c = 0;
		side_b = side_d = 0;
		corner_A = corner_C = 0;
		corner_B = corner_D = 0;
	}
};
