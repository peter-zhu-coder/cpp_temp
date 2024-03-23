// (3) shared ptr
// shared ptr 的缺陷：循环引用；
#include <iostream>
#include <string.h>
#include <vector>
#include <cassert>
#include <memory>
using namespace std;

int main() {
    // std::shared_ptr<std::string> a(new string("hello"));
    // std::shared_ptr<std::string> b(new string("world"));
    // std::cout << *a << std::endl;
    // std::cout << a.get() << std::endl;
    // std::cout << *b << std::endl;
    // std::cout << b.get() << std::endl;
    // b = a; // 允许赋值，会计数
    // std::cout << "after change---------" << std::endl;
    // std::cout << *a << std::endl;
    // std::cout << a.get() << std::endl;
    // std::cout << *b << std::endl;
    // std::cout << b.get() << std::endl;
    // std::cout << b.use_count() << std::endl; // 输出计数次数，这里是2
    // std::cout << a.use_count() << std::endl;

    // shared ptr几种初始化方式
    shared_ptr<string> s1;
    string* tmp = new string("my");
    s1.reset(tmp);  // 方式1：托管tmp
    shared_ptr<string> s2(new string("name is")); // 方式2
    shared_ptr<string> s3(s1); // 方式3
    // 方式4，使用make_shared 初始化对象，分配内存效率更高(推荐使用)
    // make_shared函数的主要功能是在动态内存中分配一个对象并初始化它，返回指向此对象的shared_ptr
    // 用法：make_shared<类型>(构造类型对象需要的参数列表);
    shared_ptr<string> s4 = make_shared<string>("peter"); // 多个参数以逗号隔开，最多接受十个
    
    std::cout << *s1 << std::endl;
    std::cout << s1.use_count() << std::endl;
    std::cout << *s2 << std::endl;
    std::cout << s2.use_count() << std::endl;
    std::cout << *s3 << std::endl;
    std::cout << s3.use_count() << std::endl;
    std::cout << *s4 << std::endl;
    std::cout << s4.use_count() << std::endl;
    return 0;
}