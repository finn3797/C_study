#include <iostream>
using namespace std;
int main() {
  for (int i = 0; i < 10; i ++) {
    cout << i << ' ';
  }
  cout << endl;

  int i = 0;
  while (++i < 10) {
    cout << i << ' ';
  }
  cout << endl;

  i = 0;
  do {
    cout << i << ' ';
  } while (++i < 10);
  cout << endl;
}