#include <iostream>
#include "stdio.h"
using namespace std;
int main() {
  int n;
  cin >> n;
  // if (n % 105 == 0) puts("3 5 7");
  // else if (n % 15 == 0) puts("3 5");
  // else if (n % 21 == 0) puts("3 7");
  // else if (n % 35 == 0) puts("5 7");
  // else if (n % 3 == 0) puts("3");
  // else if (n % 5 == 0) puts("5");
  // else if (n % 7 == 0) puts("7");
  // else puts("n");
  if (n % 3 && n % 5 && n % 7) puts("n");
  else {
    if (n % 3 == 0) cout << "3 ";
    if (n % 5 == 0) cout << "5 ";
    if (n % 7 == 0) cout << "7 ";
  }
  cout << endl;
}
