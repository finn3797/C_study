#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int sum = 0;
  // for (int i = 0; i < n; i ++) {
  //   int x;
  //   cin >> x;
  //   sum += x;
  // }
  int m = n;
  while (n--) {
    int x;
    cin >> x;
    sum += x;
  }
  cout.precision(5);
  cout << fixed;
  cout << sum << ' ' << sum * 1.0 / m << endl;
}