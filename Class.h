#pragma once
class Counter {
	int num;
public:
	Counter(int value);
	Counter();
	int cur_count();
	int incr_count();
	int red_count();
	bool exit_count();
};
