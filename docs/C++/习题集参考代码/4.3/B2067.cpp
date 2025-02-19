#include <iostream>
using namespace std;
int main() {
  int m, n;
  cin >> m >> n;
  int cnt = 0;
  while (n--) {
    int x;
    cin >> x;
    if (x > m) cnt++;
    else m -= x;
  }
  cout << cnt << endl;
}