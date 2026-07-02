#pragma once
class triangle {
protected:
	int a, b, c, A, B, C;
public:
	triangle(int side_a = 5, int side_b = 6, int side_c = 7, int degree_A = 45, int degree_B = 65, int degree_C = 70);
	int get_degrees_A();
	int get_degrees_B();
	int get_degrees_C();
	int get_sides_a();
	int get_sides_b();
	int get_sides_c();
	void print_info(triangle* triangle);
};