#pragma once
#include <iostream>

class Figure // ����� ������
{
protected:
	std::string figure_name;

public:
	Figure() {
		figure_name = "������";
	}

	std::string get_figure_name() { return figure_name; }

	virtual void print_myself() {
		std::cout << get_figure_name() << std::endl;
	}
};