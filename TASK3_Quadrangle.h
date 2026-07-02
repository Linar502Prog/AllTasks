#pragma once
class quadrangle {
protected:
	int a = 10, b = 20, c = 30, d = 40, A = 50, B = 60, C = 70, D = 80;
public:
	quadrangle(int side_a = 10, int side_b = 20, int side_c = 30, int side_d = 40, int degree_A = 50, int degree_B = 60,
		int degree_C = 70, int degree_D = 80);
	int get_degrees_A();
	int get_degrees_B();
	int get_degrees_C();
	int get_degrees_D();
	int get_sides_a();
	int get_sides_b();
	int get_sides_c();
	int get_sides_d();
	void print_info(quadrangle* quard);
};