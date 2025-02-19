#include <iostream>
#include <format>
#include "stdio.h"
using namespace std;
int main() {
  char c;
  cin >> c;
  // printf 三行
  // printf("  %c\n", c);
  // printf(" %c%c%c\n", c, c, c);
  // printf("%c%c%c%c%c\n", c, c, c, c, c);

  // printf 一行
  // printf("  %c\n %c%c%c\n%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c);
  
  // cout 三行
  // cout << "  " << c << endl;
  // cout << " " << c << c << c << endl;
  // cout << c << c << c << c << c << endl;

  // cout 一行
  // cout << "  " << c << endl << " " << c << c << c << endl << c << c << c << c << c << endl;

  cout << format("  {0}\n {0}{0}{0}\n{0}{0}{0}{0}{0}\n", c);
}