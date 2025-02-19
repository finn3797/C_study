#include <iostream>
using namespace std;
int main() {
  double d = 3.1415926;
  float f = d;
  cout.precision(20);
  cout << fixed;
  cout << "d = 3.1415926 -> " << d << endl;
  cout << "f = d         -> " << f << endl;
  f = 3.1415926;
  d = f;
  // 因为 f 本身就已经丢失了精度
  // 所以将 f 赋值给 d，并不会把进度找回来
  cout << "f = 3.1415926 -> " << f << endl;
  cout << "d = f         -> " << d << endl;

  int i = d;
  cout << "i = d -> " << i << endl;

  i = 65;
  char c = i;
  cout << "c = i -> " << c << endl;
  c = 321; // 321 = 65 + 256，256 会被舍弃
  cout << "c = 321 -> " << c << endl;

  i = c;
  cout << "i = c -> " << i << endl;
}