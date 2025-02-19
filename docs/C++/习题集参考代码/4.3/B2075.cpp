#include <iostream>
using namespace std;
int main() {
  // a * b * c * d * e % mod
  // a * b % mod * c % mod * ...
  // a * a * a * a ... a % 1000
  int a, b;
  cin >> a >> b;
  int res = 1;
  while (b--) {
    res *= a;
    res %= 1000;
  }
  cout.width(3);
  cout.fill('0');
  cout << res << endl;
}