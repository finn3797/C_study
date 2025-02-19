#include <iostream>
#include <format>
#include "stdio.h"
using namespace std;
int main() {
  char a, b, c;
  cin >> a >> b >> c;
  // printf("%c%c%c\n", c, b, a);
  // cout << c << b << a << endl;
  cout << format("{}{}{}", c, b, a) << endl;
}