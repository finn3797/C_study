#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;
int main() {
  double a, b, c;
  cin >> a >> b >> c;
  if (double rt = b * b - 4 * a * c; rt < 0) {
    cout << "No answer!" << endl;
  } else if (rt > 0) {
    rt = sqrt(rt);
    double x1 = (-b - rt) / a / 2;
    double x2 = (-b + rt) / a / 2;
    cout << format("x1={:.5f};x2={:.5f}\n", min(x1, x2), max(x1, x2));
  } else {
    cout << format("x1=x2={:.5f}\n", -b / a / 2);
  }
}
