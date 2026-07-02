#include"TASK3_Quadrangle.h"
#include<iostream>
quadrangle::quadrangle(int side_a, int side_b, int side_c, int side_d, int degree_A, int degree_B,
		int degree_C, int degree_D) {
		a = side_a;
		b = side_b;
		c = side_c;
		d = side_d;
		A = degree_A;
		B = degree_B;
		C = degree_C;
		D = degree_D;
	}
	int quadrangle::get_degrees_A() {return A;}
	int quadrangle::get_degrees_B() {return B;}
	int quadrangle::get_degrees_C() {return C;}
	int quadrangle::get_degrees_D() {return D;}
	int quadrangle::get_sides_a() {return a;}
	int quadrangle::get_sides_b() {return b;}
	int quadrangle::get_sides_c() {return c;}
	int quadrangle::get_sides_d() {return d;}
	void quadrangle::print_info(quadrangle* quard) {
		std::cout << "Стороны: a = " << quard->get_sides_a() << " b = " << quard->get_sides_b()
			<< " c = " << quard->get_sides_c() << " d = " << quard->get_sides_d() << std::endl;
		std::cout << "Углы : A = " << quard->get_degrees_A() << " B = " << quard->get_degrees_B()
			<< " C = " << quard->get_degrees_C() << " D = " << quard->get_degrees_D() << std::endl;
	}