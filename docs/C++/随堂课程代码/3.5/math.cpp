#include <iostream>
#include "math.h"
using namespace std;
int main() {
  cout << "pow(2, 3) = " << pow(2, 3) << endl;
  cout << "pow(2, -3) = " << pow(2, -3) << endl;
  cout << "pow(2, 0.5) = " << pow(2, 0.5) << endl;
  cout << endl;
  cout << "sqrt(2) = " << sqrt(2) << endl;
  cout << "sqrt(2.5) = " << sqrt(2.5) << endl;
  cout << "sqrt(4) = " << sqrt(4) << endl;
  cout << endl;
  cout << "abs(2.1) = " << abs(2.1) << endl;
  cout << "abs(-1) = " << abs(-1) << endl;
  cout << "abs(0) = " << abs(0) << endl;
  cout << endl;
  cout << "fmod(3.4, 2.1) = " << fmod(3.4, 2.1) << endl;
  cout << "fmod(5, 3) = " << fmod(5, 3) << endl;
  cout << "fmod(10, 3.3) = " << fmod(10, 3.3) << endl;
  cout << endl;
  cout << "ceil(3.1) = " << ceil(3.1) << endl;
  cout << "ceil(3.9) = " << ceil(3.9) << endl;
  cout << "ceil(-3.9) = " << ceil(-3.9) << endl;
  cout << endl;
  cout << "floor(2.9) = " << floor(2.9) << endl;
  cout << "floor(2.1) = " << floor(2.1) << endl;
  cout << "floor(-2.1) = " << floor(-2.1) << endl;
  cout << endl;
  cout << "round(1.5) = " << round(1.5) << endl;
  cout << "round(1.49) = " << round(1.49) << endl;
  cout << "round(-0.5) = " << round(-0.5) << endl;
  cout << endl;
  // hypotenuse 是斜边的意思
  // 勾股定理，直角三角形，通过两直角边求斜边
  // 常用于于快速求两点的距离
  cout << "hypot(3, 4) = " <<  hypot(3, 4) << endl;
  // cube root 三次方根
  cout << "cbrt(27) = " <<  cbrt(27) << endl;
  cout << endl;
  double pi = 3.1415926535897;
  cout << "sin(pi / 2) = " << sin(pi / 2) << endl;
  cout << "cos(pi) = " << cos(pi) << endl;
  cout << "tan(pi) = " << tan(pi) << endl;
  // tan(pi) 其实等于 0
  // 但因为精度问题（pi 本身不够精准，且浮点数也不精准）
  // 所以结果比 0 大了一丢丢
  cout << "asin(1) = " << asin(1) << endl;
  cout << "acos(-1) = " << acos(-1) << endl;
  cout << "atan(1) = " << atan(1) << endl;
  // atan2(x, y) 相当于 atan(x/y)
  // 但可以区分 (1, 1) 和 (-1, -1)
  // 可以理解为求二维坐标轴的上的某个点和 x 轴的夹角，表示范围是 (-pi, pi]
  // 而 atan 只能表示 (-1/2 pi, 1/2 pi]
  cout << "atan2(1, 1) = " << atan2(1, 1) << endl; // 1/4 pi
  cout << "atan2(-1, -1) = " << atan2(-1, -1) << endl; // -3/4 pi
  cout << "atan2(0, -1) = " << atan2(0, -1) << endl; // pi
  cout << endl;
  double e = 2.7182818284590;
  cout << "log(e) = " << log(e) << endl;
  cout << "log2(32) = " << log2(32) << endl;
  cout << "log10(100) = " << log10(100) << endl;
}