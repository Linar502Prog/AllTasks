#include"Class.h"
Counter::Counter(int value) {num = value;}
Counter::Counter() { num = 1; };
int Counter::cur_count() {return num;}
int Counter::incr_count() {num++;return num;}
int Counter::red_count() {num--;return num;}
bool Counter::exit_count() {return false;}
