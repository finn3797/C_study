#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  double e = 1;
  for (int i = 1; i <= n; i ++) {
    double res = 1;
    for (int j = 1; j <= i; j ++) {
      res *= j;
    }
    e += 1 / res;
  }
  cout << fixed;
  cout.precision(10);
  cout << e << endl;
}