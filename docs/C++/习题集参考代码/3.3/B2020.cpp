#include <iostream>
using namespace std;
int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  int sum = 0;
  sum += a % 3;
  b += a / 3;
  e += a / 3;
  a /= 3;

  sum += b % 3;
  c += b / 3;
  a += b / 3;
  b /= 3;

  sum += c % 3;
  d += c / 3;
  b += c / 3;
  c /= 3;

  sum += d % 3;
  e += d / 3;
  c += d / 3;
  d /= 3;

  sum += e % 3;
  a += e / 3;
  d += e / 3;
  e /= 3;
  
  cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
  cout << sum << endl;
  // int n = 5;
  // int apples[n];
  // for (int i = 0; i < n; i ++) {
  //   cin >> apples[i];
  // }
  // int sum = 0;
  // for (int i = 0; i < n; i ++) {
  //   int prev = (i - 1 + n) % n;
  //   int next = (i + 1) % n;
  //   sum += apples[i] % 3;
  //   apples[prev] += apples[i] / 3;
  //   apples[next] += apples[i] / 3;
  //   apples[i] /= 3;
  // }
  // for (int i = 0; i < n; i ++) {
  //   cout << apples[i] << ' ';
  // }
  // cout << endl << sum << endl;
}