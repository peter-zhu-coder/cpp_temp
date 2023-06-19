#include <iostream>
#include <sstream>
#include <iomanip>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <unordered_set>
// #include <netdb.h>
// #include <sys/socket.h>


/*
? queries msg
! alert message
todo todos
** highlight
* normal msg
// delete msg
@ prama
*/
void print() {
	std::cout << "hello " << std::endl;
}


int main() {
	std::unordered_set<int> *my_set;
	my_set = nullptr;
	std::cout << "debug: " << std::endl;

	if(!my_set) {
		my_set = new std::unordered_set<int>;
	}

	my_set->insert(1);
	std::cout << my_set->size() << std::endl;
	my_set->erase(1);

	if(my_set->size() == 0) {
		delete my_set;
		my_set = nullptr;
	}


	std::cout << my_set << std::endl;
    // system("pause");
    return 0;
}