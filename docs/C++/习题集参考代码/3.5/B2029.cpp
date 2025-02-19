#include <iostream>
#include "math.h"
using namespace std;
int main() {
  double pi = 3.14;
  int h, r;
  cin >> h >> r;
  double v = pi * r * r * h / 1000;
  cout << ceil(20 / v) << endl;
}