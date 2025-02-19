#include <iostream>
#include "stdio.h"
using namespace std;
int main() {
  cout.precision(3);
  cout << fixed;
  double x;
  cin >> x;
  if (x < 5) {
    cout << -x + 2.5 << endl;
  } else if (x < 10) {
    cout << 2 - 1.5 * (x - 3) * (x - 3) << endl;
  } else {
    cout << x / 2 - 1.5 << endl;
  }
}
