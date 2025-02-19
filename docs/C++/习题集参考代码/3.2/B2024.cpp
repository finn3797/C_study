#include <iostream>
#include <format>
#include "stdio.h"
using namespace std;
int main() {
  double d;
  cin >> d;
  // printf("%f\n%.5f\n%e\n%g\n", d, d, d, d);
  // cout << fixed;
  // cout << d << endl;
  // cout.precision(5);
  // cout << d << endl;
  // cout.precision(6);
  // cout << scientific;
  // cout << d << endl;
  // cout << defaultfloat;
  // cout << d << endl;
  cout << format("{0:f}\n{0:.5f}\n{0:e}\n{0:g}\n", d);
}