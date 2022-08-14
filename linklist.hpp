#pragma once
#ifndef linklist_hpp
#define linklist_hpp
#include "link.hpp"

class linklist {
public:
	linklist();
	~linklist();
	void add(int data);
	void print();

private:
	link* first;

};



#endif // !linklist_hpp
