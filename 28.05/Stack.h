#pragma once
#include"Library.h"
template<typename type> class Stack {
private:
	type *els;
	size_t length;
	size_t buf_size;
public:
	//êîíñòðóêòîð ïî óìî÷àíèþ
	Stack();
	//parameter constructor
	Stack(type* mass, int n);
	//copy constructor
	Stack(const Stack& obj);

	type& top();
	void push(type e);
	void pop();
	size_t size();
	bool empty();

	//destructor
	~Stack();

};