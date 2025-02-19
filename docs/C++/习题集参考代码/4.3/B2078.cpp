#include <iostream>
using namespace std;
int main() {
  long long m;
  int k;
  cin >> m >> k;
  int cnt = 0;
  while (m) {
    int digit = m % 10;
    if (digit == 3) {
      cnt ++;
    }
    m /= 10;
  }
  cout << (cnt == k ? "YES" : "NO") << endl;
}