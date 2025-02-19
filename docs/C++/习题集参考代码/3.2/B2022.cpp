#include <iostream>
#include <format>
#include "stdio.h"
using namespace std;
int main() {
  double d;
  cin >> d;
  // printf("%.12lf\n", d);
  // cout.precision(12);
  // cout << fixed;
  // cout << d << endl;
  cout << format("{:.12f}", d) << endl;
}