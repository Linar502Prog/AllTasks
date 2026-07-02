int addition(int value1, int value2) {
	return value1 + value2;
}
int subtraction(int value1, int value2) {
	return value1 - value2;
}
int multiplication(int value1, int value2) {
	return value1 * value2;
}
int division(int value1, int value2) {
	return value1 / value2;
}
double power(int value1, int value2) {
	double rezult{1};
	if (value2 >= 0) {
		for (int i = 0; i < value2; i++) {
			rezult *= value1;
		}
		return rezult;
	}
	else {
		for (int i = value2; i < 0; i++) {
			rezult *= value1;
		}
		return 1/rezult;
	}
}
