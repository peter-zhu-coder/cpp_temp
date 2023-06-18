#include <iostream>
#include <sstream>
#include <iomanip>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <unordered_set>
#include <vector>
#include <assert.h>
using namespace std;

int main() {
    string a = "hello world!";
    string b;
    ostringstream zhu;
    zhu << a;
    b = zhu.str();
    cout << b << endl;
    // assert(0);

    return 0;
}