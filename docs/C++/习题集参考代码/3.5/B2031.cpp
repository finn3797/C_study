#include <iostream>
#include "math.h"
using namespace std;
int main() {
  double x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  double a = hypot(x1 - x2, y1 - y2);
  double b = hypot(x1 - x3, y1 - y3);
  double c = hypot(x2 - x3, y2 - y3);
  double p = (a + b + c) / 2;
  cout.precision(2);
  cout << fixed;
  cout << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
}