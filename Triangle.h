#pragma once

class Triangle : public Figure// ����� �����������
{
protected:
	int side_a = 0;
	int side_b = 0;
	int side_c = 0;
	int corner_A = 0;
	int corner_B = 0;
	int corner_C = 0;

public:
	Triangle() {
		figure_name = "�����������";
		side_a = 10;
		side_b = 20;
		side_c = 30;
		corner_A = 50;
		corner_B = 60;
		corner_C = 70;
	}

	Triangle(int side_a, int side_b, int side_c, int corner_A, int corner_B, int corner_C) {
		side_a = 0;
		side_b = 0;
		side_c = 0;
		corner_A = 0;
		corner_B = 0;
		corner_C = 0;
	}

	int get_side_a() { return side_a; }
	int get_side_b() { return side_b; }
	int get_side_c() { return side_c; }
	int get_corner_A() { return corner_A; }
	int get_corner_B() { return corner_B; }
	int get_corner_C() { return corner_C; }

	virtual void print_myself() {
		std::cout << get_figure_name() << "\n�������: " << "a=" << get_side_a() << " b=" << get_side_b()
			<< " c=" << get_side_c() << "\n" << "����: " << "�=" << get_corner_A()
			<< " B=" << get_corner_B() << " C=" << get_corner_C() << "\n" << std::endl;
	}
};
