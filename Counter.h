#pragma once

class Counter {
public: 
	int num;
	  Counter();
	  Counter(int num);
	  void add();
	  void subtraction();
	  void equals() ;
};

void Command(Counter& counter);