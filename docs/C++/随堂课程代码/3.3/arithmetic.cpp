#include <iostream>
using namespace std;
int main() {
  int a = 5, b = 3;
  cout << "a + b: " << a + b << endl;
  cout << "4 + 3: " << 5 + 3 << endl;
  cout << "a + 3: " << a + 3 << endl;
  cout << "5 + b: " << 5 + b << endl;
  cout << "a - b: " << a - b << endl;
  cout << "-a: " << -a << endl;
  int negative = -4;
  cout << "-negative: " << -negative << endl;
  cout << "a * b: " << a * b << endl;
  cout << "a / b: " << a / b << endl;
  // cout << a / 0 << endl;
  cout << "a % b: " << a % b << endl;
  // cout << a % 0 << endl;
  cout << "1 + 2 * 3:" << 1 + 2 * 3 << endl;
  cout << "(1 + 2) * 3:" << (1 + 2) * 3 << endl;
  cout << "(1 + 2) * 3 % 5:" << (1 + 2) * 3 % 5 << endl;

  int front = 5;
  cout << "++在前: " << ++front << endl;
  int back = 5;
  cout << "++在后: " << back++ << endl;
}