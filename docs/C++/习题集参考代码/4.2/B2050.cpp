#include <iostream>
#include "stdio.h"
#include <algorithm>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int d = max(a, max(b, c));
  int sum = a + b + c - d;
  cout << (sum > d) << endl;
}
