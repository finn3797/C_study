#include <iostream>
using namespace std;
int main() {
  // 14 , 17, 27, 71, 72
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i ++) {
    if (i % 7 == 0) continue;
    bool seven = false;
    int m = i;
    while (m) {
      int digit = m % 10;
      if (digit == 7) {
        seven = true;
        break;
      }
      m /= 10;
    }
    if (seven) continue;
    sum += i * i;
  }
  cout << sum << endl;
}