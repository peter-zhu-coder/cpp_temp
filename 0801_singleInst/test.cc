#include "single.h"

void func1 () {
    Singleton* inst = Singleton::GetInstance();
    inst->addCnt();
}

void func2() {
    Singleton* inst = Singleton::GetInstance();
    for(int i = 0; i < 5; i++) {
        inst->addCnt();
    }
}

int main() {
    func1();
    func2();
    Singleton* inst = Singleton::GetInstance();
    inst->printSummary();
    Singleton::DelInstance();
    return 0;
}