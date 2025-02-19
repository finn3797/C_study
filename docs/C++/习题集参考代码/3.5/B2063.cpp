#include <iostream>
#include "math.h"
using namespace std;
int main() {
  int x, n;
  cin >> x >> n;
  cout.precision(4);
  cout << fixed;
  cout << x * pow(1.001, n) << endl;
}