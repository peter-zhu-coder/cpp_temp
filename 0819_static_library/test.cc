#include <iostream>
#include "my_math.h"

// to build the test.cc, you can run the follow command
// g++ test.cc -static -lmymath -L ./lib_dir/ -I ./lib_dir/

int main() {
    int a = 5;
    int b = 2;
    int sum = my_sum(a, b);
    int abs = my_sub(a, b);
    std::cout << sum << ";" << std::endl;
    std::cout << abs << ";" << std::endl;
    return 0;
}