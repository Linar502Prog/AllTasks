#include"TASK3_Triangle.h"
#include<iostream>
triangle::triangle(int side_a, int side_b, int side_c, int degree_A, int degree_B, int degree_C) {
		a = side_a;
		b = side_b;
		c = side_c;
		A = degree_A;
		B = degree_B;
		C = degree_C;
	}
	int triangle::get_degrees_A() {return A;}
	int triangle::get_degrees_B() {return B;}
	int triangle::get_degrees_C() {return C;}
	int triangle::get_sides_a() {return a;}
	int triangle::get_sides_b() {return b;}
	int triangle::get_sides_c() {return c;}
	void triangle::print_info(triangle* triangle) {
		std::cout << "Стороны: a = " << triangle->get_sides_a() << " b = " << triangle->get_sides_b()
			<< " c = " << triangle->get_sides_c() << std::endl;
		std::cout << "Углы : A = " << triangle->get_degrees_A() << " B = " << triangle->get_degrees_B()
			<< " C = " << triangle->get_degrees_C() << std::endl;
	}