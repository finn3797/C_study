#include <iostream>
using namespace std;
int main() {
  int sum = 0;
  for (int i = 0; i < 100; i ++) {
    if (i % 2 == 0) { // 偶数
      continue;
    }
    sum += i;
  }
  cout << "100 以内的奇数和：" << sum << endl;

  sum = 0;
  for (int i = 1;; i ++) {
    if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0) break;
    sum += i;
  }
  cout << "计算从 1 开始的累加和，直到数字可以整除 3 5 7：" << sum << endl;

  sum = 0;
  int i = 1;
label1:
  if (i <= 100) {
    sum += i;
    i++;
    goto label1;
  }
  cout << "用 goto 完成 1 到 100 的累加：" << sum << endl;
}