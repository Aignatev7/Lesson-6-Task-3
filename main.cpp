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
Задача 3. Иерархия классов
В этом задании вы вынесете иерархию классов в отдельные файлы.

Возьмите иерархию классов геометрических фигур из предыдущего домашнего задания.

Разнесите иерархию классов по отдельным файлам, продемонстрируйте работу программы таким же образом, как в предыдущем домашнем задании.

Обратите внимание на то, что для каждого класса должна быть создана своя пара — заголовочный файл + файл исходного кода.

Пример работы программы
Консоль
Треугольник :
Стороны: a = 10 b = 20 c = 30
Углы : A = 50 B = 60 C = 70

Прямоугольный треугольник :
Стороны: a = 10 b = 20 c = 30
Углы : A = 50 B = 60 C = 90

Равнобедренный треугольник :
Стороны: a = 10 b = 20 c = 10
Углы : A = 50 B = 60 C = 50

Равносторонний треугольник :
Стороны: a = 30 b = 30 c = 30
Углы : A = 60 B = 60 C = 60

Четырёхугольник :
Стороны : a = 10 b = 20 c = 30 d = 40
Углы : A = 50 B = 60 C = 70 D = 80

Прямоугольник :
Стороны : a = 10 b = 20 c = 10 d = 20
Углы : A = 90 B = 90 C = 90 D = 90

Квадрат :
Стороны : a = 20 b = 20 c = 20 d = 20
Углы : A = 90 B = 90 C = 90 D = 90

Параллелограмм :
Стороны : a = 20 b = 30 c = 20 d = 30
Углы : A = 30 B = 40 C = 30 D = 40

Ромб :
Стороны : a = 30 b = 30 c = 30 d = 30
Углы : A = 30 B = 40 C = 30 D = 40
*/