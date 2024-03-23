// (2) unique ptr, 禁止赋值

#include <iostream>
#include <string.h>
#include <vector>
#include <cassert>
#include <memory>
using namespace std;
 
int main() {
    std::unique_ptr<std::string> a(new string("hello"));
    std::unique_ptr<std::string> b(new string("world"));
    std::cout << *a << std::endl;
    std::cout << a.get() << std::endl;
    std::cout << *b << std::endl;
    std::cout << b.get() << std::endl;
    // b = a; // 禁止赋值；
    b = std::move(a);	// 使用move把左值转成右值就可以赋值了，效果和auto_ptr赋值一样
    std::cout << "after change---------" << std::endl;
    // std::cout << *a << std::endl;
    std::cout << a.get() << std::endl;
    std::cout << *b << std::endl;
    std::cout << b.get() << std::endl;
    return 0;
}