#include <iostream>
using namespace std;
int main() {
  int a, b, n;
  cin >> a >> b >> n;
  a %= b;
  int x;
  while (n--) {
    a *= 10;
    x = a / b;
    a -= x * b;
  }
  cout << x << endl;
}