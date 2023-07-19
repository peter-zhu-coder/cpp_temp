#include<iostream>
using namespace std;

int fun(int num)
{
    static int cnt = 0;
    cnt += 1;
    return cnt;
}
int main() 
{
    int a = 5;
    for (int i = 0; i < 3; i++) {
        std::cout << fun(a) << std::endl;
    }
    return 0; 
}