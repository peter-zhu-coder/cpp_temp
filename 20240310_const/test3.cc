#include <iostream>
using namespace std;

class test {
public: 
    void show () {
        cout << "normal" << endl;
    } 
    void show() const {
        cout << "const" << endl;
    }   
};

int main () {
    test t1;
    t1.show();  //显示 normal

    const test t2;
    t2.show(); // 显示 const
    return 0;
}