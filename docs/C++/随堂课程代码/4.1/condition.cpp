#include <iostream>
using namespace std;
int main() {
  int a1 = 0, a2 = 10;
  int x = true ? a1++ : a2++;
  cout << "条件成立时，只计算第一个表达式，不计算第二个" << endl;
  cout << "a1 = " << a1 << ", a2 = " << a2 << endl;
  x = false ? a1++ : a2++;
  cout << "条件不成立时，只计算第二个表达式，不计算第一个" << endl;
  cout << "a1 = " << a1 << ", a2 = " << a2 << endl;
}