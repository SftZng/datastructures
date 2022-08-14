
#include "link.hpp"
#include <iostream>
using namespace std;

link::link(int data) {
	this->data = data;
	this->next_address = 0;

}

link::~link() {
	cout <<data<<": deleted" << endl;
}
