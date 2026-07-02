#include<iostream>
#include"Windows.h"
#include"func.h"
#include"Class.h"
#include"TASK3_Triangle.h"
#include"TASK3_Right_triangle.h"
#include"TASK3_Isosceles_triangle.h"
#include"TASK3_Equilateral_triangle.h"
#include"TASK3_Quadrangle.h"
#include"TASK3_Rectangle.h"
#include"TASK3_Square.h"
#include"TASK3_Parallelogram.h"
#include"TASK3_Rhombus.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#pragma region TASK1
	std::cout << "TASK1" << std::endl;
	int num1, num2, operation;
	std::cout << "Введите первое число : ";
	std::cin >> num1;
	std::cout << "Введите второе число : ";
	std::cin >> num2;
	std::cout << "/Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
	std::cin >> operation;
	switch (operation) {
	case 1:
		std::cout << num1 << " плюс " << num2 << " = " << addition(num1, num2) << std::endl;
		break;
	case 2:
		std::cout << num1 << " минус " << num2 << " = " << subtraction(num1, num2) << std::endl;
		break;
	case 3:
		std::cout << num1 << " умножить " << num2 << " = " << multiplication(num1, num2) << std::endl;
		break;
	case 4:
		std::cout << num1 << " разделить " << num2 << " = " << division(num1, num2) << std::endl;
		break;
	case 5:
		std::cout << num1 << " в степени " << num2 << " = " << power(num1, num2) << std::endl;
		break;
	default:
		std::cout << "Введена некорректная операция " << std::endl;
		break;
	}
#pragma endregion
#pragma region TASK2
	std::cout << std::endl << "TASK2" << std::endl;
	int value;
	std::string word;
	char command;
	bool flag = true;
	Counter count;
	std::cout << "Вы хотите указать начальное значение счётчика ? Введите да или нет : " << std::endl;
	std::cin >> word;
	if (word == "да") {
		std::cout << "Введите начальное значение счётчика : " << std::endl;
		std::cin >> value;
		count = Counter(value);
	}
	while (flag) {
		std::cout << "Введите команду('+', '-', '=' или 'х') : " << std::endl;
		std::cin >> command;
		if (command == '+') {
			std::cout << count.incr_count() << std::endl;
		}
		else if (command == '-') {
			std::cout << count.red_count() << std::endl;
		}
		else if (command == '=') {
			std::cout << count.cur_count() << std::endl;
		}
		else if (command == 'х') {
			std::cout << "До свидания! " << std::endl;
			flag = count.exit_count();
		}

	}
#pragma endregion
#pragma region TASK3
	std::cout << std::endl << "TASK3" << std::endl;
	right_triangle RightTri(3, 4, 5, 53, 37);
	isosceles_triangle IsosTri(5, 5, 3, 70, 70, 40);
	equilateral_triangle EquiTri(5, 5, 5, 60, 60, 60);
	triangle Tri;
	quadrangle Quard;
	rectangle Rect(4, 8, 4, 8, 90, 90, 90, 90);
	square Square(7, 7, 7, 7, 90, 90, 90, 90);
	parallelogram Paral(20, 25, 20, 25, 40, 50, 40, 50);
	rhombus Rhombus(35, 35, 35, 35, 65, 75, 65, 75);
	std::cout << "Треугольник: " << std::endl;
	Tri.print_info(&Tri); std::cout << std::endl;
	std::cout << "Прямоугольный треугольник: " << std::endl;
	Tri.print_info(&RightTri); std::cout << std::endl;
	std::cout << "Равнобедренный треугольник " << std::endl;
	Tri.print_info(&IsosTri); std::cout << std::endl;
	std::cout << "Равносторонний треугольник " << std::endl;
	Tri.print_info(&EquiTri); std::cout << std::endl;
	std::cout << "Четырехугольник: " << std::endl;
	Quard.print_info(&Quard); std::cout << std::endl;
	std::cout << "Прямоугольник: " << std::endl;
	Rect.print_info(&Rect); std::cout << std::endl;
	std::cout << "Квадрат: " << std::endl;
	Square.print_info(&Square); std::cout << std::endl;
	std::cout << "Параллелограмм: " << std::endl;
	Paral.print_info(&Paral); std::cout << std::endl;
	std::cout << "Ромб: " << std::endl;
	Rhombus.print_info(&Rhombus); std::cout << std::endl;
#pragma endregion
	return EXIT_SUCCESS;
}