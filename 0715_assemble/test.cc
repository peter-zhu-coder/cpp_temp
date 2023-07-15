#include <iostream>

int my_sum(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    a = 1;
    b = 2;
    int ret = my_sum(a, b);
    std::cout << ret << std::endl;

    return 0;
}