#include <iostream>
#include <format>
#include "stdio.h"
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  // printf("%8d %8d %8d\n", a, b, c);

  // cout.width(8);
  // cout << a << ' ';
  // cout.width(8);
  // cout << b << ' ';
  // cout.width(8);
  // cout << c << endl;
  
  cout << format("{:8} {:8} {:8}", a, b, c) << endl;
}