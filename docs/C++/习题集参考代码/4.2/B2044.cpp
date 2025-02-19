#include <iostream>
#include "stdio.h"
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  // if (a < 60 && b >= 60 && c >= 60) puts("1");
  // else if (a >= 60 && b < 0 && c >= 60) puts("1");
  // else if (a >= 60 && b >= 60 && c < 60) puts("1");
  // else puts("0");
  int cnt = 0;
  if (a < 60) cnt ++;
  if (b < 60) cnt ++;
  if (c < 60) cnt ++;
  cout << (cnt == 1) << endl;
}
