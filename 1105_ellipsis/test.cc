#include <iostream>
#include <cstdarg>
using namespace std;


int add(int a1, ...) {
    va_list arg_ptr;
	int sum = 0;
	int nVal;
	sum += a1;
	va_start(arg_ptr, a1);
	do {
		nVal = va_arg(arg_ptr, int);
		sum += nVal;
	} while (nVal != 0);

	va_end(arg_ptr);
	return sum;
}


int main() {
    int a = 1, b = 2, c = 3, d = 4;
    int res = add(a, b, c, d, 0);

    std::cout << "res is: " << res << std::endl;
    system("pause");
    return 0;
}