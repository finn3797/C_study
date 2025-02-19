#include <iostream>
using namespace std;
int main() {
  // 显式转换，以下三个写法效果相同
  cout << int(3.14) << endl;
  cout << (int)3.14 << endl;
  cout << static_cast<int>(3.14) << endl;
}