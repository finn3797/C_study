#include <iostream>
using namespace std;
int main() {
  int a1, a2, n;
  cin >> a1 >> a2 >> n;
  int diff = a2 - a1;
  cout << a1 + (n - 1) * diff << endl;
}