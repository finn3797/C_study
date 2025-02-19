#include <iostream>
#include "math.h"
using namespace std;
int main() {
  //   7 = 7 1
  // 8 = 2 * 4
  // 24 = 4 * 6, 3 * 8, 6 * 4, 8 * 3
  // x = y * z // y < z,  y ~ [2, sqrt(x)]
  // 19, 29
  int n;
  cin >> n;
  int cnt = 0;
  for (int x = 2;;x ++) {
    bool isPrime = true;
    double sq = sqrt(x);
    for (int i = 2; i <= sq; i++) {
      if (x % i == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      cnt ++;
      if (cnt == n) {
        cout << x << endl;
        break;
      }
    }
  }
}