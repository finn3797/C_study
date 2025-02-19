#include <iostream>
#include "stdio.h"
using namespace std;
int main() {
  unsigned int x;
  // int x;
  int y;
  cin >> x >> y;
  // x 0 y -1
  if (y < 0) puts(">");
  else {
    if (x < y) puts("<");
    if (x == y) puts("=");
    if (x > y) puts(">");
  }
}