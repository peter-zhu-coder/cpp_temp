#include <iostream>
using namespace std;

// 1. nodiscard 加在函数前面
[[nodiscard]] bool empty() {
    return true;
} 

// 2. nodiscard 加在class/struct 前面
struct [[nodiscard]] MyError {
  std::string message;
  int code;
};
MyError divide(int a, int b) {
  if (b == 0) {
    return {"Division by zero", -1};
  }
  std::cout << (a / b) << '\n';
  return {};
}

int main() {
    // empty(); // warn;
    // auto ret = empty(); // no warn;

    // divide(1, 2); // warn;
    // divide(1, 0); // warn;
    auto ret = divide(1, 0); // no warn;
    cout << ret.message << endl;
    return 0;
}
