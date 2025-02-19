#include <iostream>
#include "math.h"
using namespace std;
int main() {
  double ax, ay;
  double bx, by;
  cin >> ax >> ay >> bx >> by;
  cout.precision(3);
  cout << fixed;
  // cout << sqrt(pow(ax - bx, 2) + pow(ay - by, 2)) << endl;
  cout << hypot(ax - bx, ay - by) << endl;
}