#include<iostream>

int sum1(int a, int b);

int main () {
    int a, b;
    a = 3;
    b = 2;
    int ret = sum1(a, b);
    std::cout << ret << std::endl;
    return 0;
}
