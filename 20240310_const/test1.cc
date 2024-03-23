#include <iostream>
using namespace std;

const int* add(int* a, int n)
{
    for(int i=0; i<n; i++)
        a[i]++;
    return a;
}
 
int main()
{
    int a[] = {1,2,3};
    int len = sizeof(a)/sizeof(int);
    const int *b; // 这里必须用const int* 类型的变量接住函数的返回值
    b = add(a, len);
    // *b = 1; // read only 

    for(int i=0; i<len; i++) {
        // b[i]++; // read only 
        cout << b[i] << " ";
    }
    cout << endl;    
    return 0;
}
