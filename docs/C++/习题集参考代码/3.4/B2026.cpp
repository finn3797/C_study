#include <iostream>
#include "math.h"
using namespace std;
int main() {
  double a, b;
  cin >> a >> b;
  cout << fixed;
  long long k = a / b;
  cout << a - k * b << endl;
  // cout << fmod(a, b) << endl;
}