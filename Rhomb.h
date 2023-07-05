#pragma once

class Rhomb : public Parallelogram // класс Ромб
{
public:
	Rhomb() {
		figure_name = "Ромб";
		side_a = side_b = side_c = side_d = 30;
		corner_A = corner_C = 30;
		corner_B = corner_D = 40;
	}

	Rhomb(int side_d, int corner_C, int corner_D) {
		side_a = side_b = side_c = side_d = 30;
		corner_A = corner_C = 30;
		corner_B = corner_D = 40;
	}
};