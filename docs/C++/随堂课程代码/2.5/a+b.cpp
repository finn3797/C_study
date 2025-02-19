#include <iostream>
#include <format>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  printf("%d + %d = %d\n", a, b, a + b);
  cout << a << " + " << b << " = " << a + b << endl;
  cout << format("{} + {} = {}", a, b, a + b) << endl;
}