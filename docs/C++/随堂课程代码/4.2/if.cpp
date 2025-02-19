#include <iostream>
using namespace std;
int main() {
  int x = 0;
  if (x < 0) {
    cout << "if branch" << endl;
  } else if (x == 0) {
    cout << "else if branch" << endl;
  } else {
    cout << "else branch" << endl;
  }
  
  int a = 1, b = 2;
  if (true) {
    int a = 10;
    cout << a << ' ' << b << endl;
  }
  cout << a << ' ' << b << endl;

  if (int power = a * a; power < 100) {
    cout << power << endl;
  } else {
    cout << power << endl;
  }
}