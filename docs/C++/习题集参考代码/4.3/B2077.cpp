#include <iostream>
#include <format>
using namespace std;
int main() {
  long long n;
  cin >> n;
  while (n != 1) {
    if (n % 2) {
      cout << format("{}*3+1={}", n, n * 3 + 1) << endl;
      n = n * 3 + 1;
    } else {
      cout << format("{}/2={}", n, n / 2) << endl;
      n /= 2;
    }
  }
  cout << "End" << endl;
}