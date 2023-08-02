#include "single.h"
#include <iostream>

Singleton* Singleton::_inst = nullptr;

Singleton* Singleton::GetInstance()
{
	if (_inst == nullptr)
	{
		_inst = new Singleton;
	}
	return _inst;
}

void Singleton::DelInstance() {
    if (_inst) {
        delete _inst;
        _inst = NULL;
    }
}

void Singleton::addCnt() {
    _cnt++;
}

void Singleton::printSummary() {
    std::cout << "the total is " << _cnt << std::endl;
}
