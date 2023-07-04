#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>

// Get the bits in sequence
int main() {
    int a = 8;
    int tmp;
    for(int i = 0; i < 32; i++) {
        tmp = (a >> i) & 0x1;
        std::cout << tmp << " ";
    }
    return 0;
}