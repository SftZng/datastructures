#include "linklist.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

linklist::linklist() {

	first = 0;

}

linklist::~linklist() {
	link* pass = first;
	while (pass != 0) {
		link* deleted = pass;
		pass = pass->next_address;
		delete deleted;
	}
}

void linklist::add(int data) {

	link* new_link = new link(data);
	if (first == 0) {
		first = new_link;

	}
	else {
		link* pass = first;

		while (pass->next_address != 0) 
			pass = pass->next_address;
        
		pass->next_address = new_link;
		
	}
}

void linklist::print() {
	cout << setw(10) << "address" << setw(17) << "data" << setw(25) << "next_address" << endl;
	cout << "---------------------------------------------" << endl;
	link* pass = first;

	while (pass != 0) {
		cout << setw(10) << pass << setw(10) << pass->data << setw(25) << pass->next_address << endl;
		pass = pass->next_address;
	}
	cout << endl;
}
