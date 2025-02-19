#include <iostream>
using namespace std;
int main() {
  int x, a, y, b;
  cin >> x >> a >> y >> b;
  // x * a = base + z * a
  // y * b = base + z * b
  // by - ax = (b - a) * z
  // z = (by - ax) / (b - a)
  cout.precision(2);
  cout << fixed;
  cout << 1.0 * (b * y - a * x) / (b - a) << endl;
}