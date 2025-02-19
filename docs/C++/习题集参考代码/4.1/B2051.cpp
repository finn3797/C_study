#include <iostream>
using namespace std;
int main() {
  int x, y;
  cin >> x >> y;
  cout << (-1 <= x && x <= 1 && -1 <= y && y <= 1 ? "yes" : "no") << endl;
}