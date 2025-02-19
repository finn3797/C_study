#include <iostream>
#include <format>
using namespace std;
int main() {
  double F;
  cin >> F;
  cout << format("{:.5f}", 5 * (F - 32) / 9) << endl;
}