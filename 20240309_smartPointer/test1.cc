// (1) auto_ptr, b赋值给a后，通过b无法访问资源；

#include <iostream>
#include <string.h>
#include <vector>
#include <cassert>
#include <memory>
using namespace std;

int main() {
    std::auto_ptr<std::string> a(new string("hello"));
    std::auto_ptr<std::string> b(new string("world"));
    string c = "my name";
    string d = "peter";
    std::cout << *a << std::endl; //智能指针可以和正常指针一样使用，重载了* 和 ->
    std::cout << a.get() << std::endl; // get() 成员函数 获取地址；
    std::cout << *b << std::endl;
    std::cout << b.get() << std::endl;
    std::cout << c << std::endl;
    std::cout << &c << std::endl;
    std::cout << d << std::endl;
    std::cout << &d << std::endl;

    b = a;
    d = c;
    std::cout << "after change---------" << std::endl;
    // std::cout << *a << std::endl;
    std::cout << a.get() << std::endl;
    std::cout << *b << std::endl;
    std::cout << b.get() << std::endl;
    std::cout << c << std::endl;
    std::cout << &c << std::endl;
    std::cout << d << std::endl;
    std::cout << &d << std::endl;
    return 0;
}