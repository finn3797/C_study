#include <iostream>
#include <format>
#include "stdio.h"
using namespace std;
int main() {
  float f;
  cin >> f;
  // printf("%.3f\n", f);
  // cout.precision(3);
  // cout << fixed;
  // cout << f << endl;
  cout << format("{:.3f}", f) << endl;
}