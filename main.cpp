#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"

void print_info(Figure* f)
{
	f->print_myself();
}

int main() {
	setlocale(LC_ALL, "Russian");
	Triangle tri;
	print_info(&tri);
	RightTriangle rig_tri;
	print_info(&rig_tri);
	IsoscelesTriangle isos_tri;
	print_info(&isos_tri);
	EquilateralTriangle eq_tri;
	print_info(&eq_tri);
	Quadrangle quad;
	print_info(&quad);
	Rectangle rect;
	print_info(&rect);
	Square square;
	print_info(&square);
	Parallelogram paral;
	print_info(&paral);
	Rhomb rhomb;
	print_info(&rhomb);
}





/*
������ 3. �������� �������
� ���� ������� �� �������� �������� ������� � ��������� �����.

�������� �������� ������� �������������� ����� �� ����������� ��������� �������.

��������� �������� ������� �� ��������� ������, ����������������� ������ ��������� ����� �� �������, ��� � ���������� �������� �������.

�������� �������� �� ��, ��� ��� ������� ������ ������ ���� ������� ���� ���� � ������������ ���� + ���� ��������� ����.

������ ������ ���������
�������
����������� :
�������: a = 10 b = 20 c = 30
���� : A = 50 B = 60 C = 70

������������� ����������� :
�������: a = 10 b = 20 c = 30
���� : A = 50 B = 60 C = 90

�������������� ����������� :
�������: a = 10 b = 20 c = 10
���� : A = 50 B = 60 C = 50

�������������� ����������� :
�������: a = 30 b = 30 c = 30
���� : A = 60 B = 60 C = 60

�������������� :
������� : a = 10 b = 20 c = 30 d = 40
���� : A = 50 B = 60 C = 70 D = 80

������������� :
������� : a = 10 b = 20 c = 10 d = 20
���� : A = 90 B = 90 C = 90 D = 90

������� :
������� : a = 20 b = 20 c = 20 d = 20
���� : A = 90 B = 90 C = 90 D = 90

�������������� :
������� : a = 20 b = 30 c = 20 d = 30
���� : A = 30 B = 40 C = 30 D = 40

���� :
������� : a = 30 b = 30 c = 30 d = 30
���� : A = 30 B = 40 C = 30 D = 40
*/