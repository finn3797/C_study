#include <iostream>
using namespace std;
/**
 * 如果出现中文乱码，请查看[环境安装与配置]中的 README
 */
// cout 格式修饰符规范:

// 以下设置进行切换
// left, right, internal 对齐方式
// dec, oct, hex 整型的进制
// fixed, scientific, floatfield, defaultfloat 浮点型的输出形式

// 以下设置需要开关控制
// [no]boolalpha 布尔输出 true 和 false 代替 1 和 0
// [no]showbase 输出整型时带上进制符
// [no]showpos 输出数字带上正负号
// [no]uppercase 输出 16 进制时使用大写
// [no]showpoint、[no]skipws、[no]unitbuf 过于冷僻，不做介绍

// 以下设置接受参数，通过函数的形式调用
// fill(char) 默认是空格，设置宽度填充字符
// precision(int) 默认是 6，设置小数点后的精度，需要和 fixed 结合
// width(int) 设置宽度（仅生效一次）
int main() {
  cout << "==== 整型 ====" << endl;
  int i = 255;
  cout << dec; // 切换 10 进制，默认
  cout << "10 进制 (dec): " << i << endl;
  cout << oct; // 切换 8 进制
  cout << "8 进制 (oct): " << i << endl;
  cout << hex; // 切换 16 进制
  cout << "16 进制 (hex): " << i << endl;
  cout << uppercase; // 打开大写
  cout << "16 进制 (hex, uppercase): " << i << endl;
  cout << nouppercase; // 关闭大写
  cout << showbase; // 打开进制符
  cout << oct; // 切换 8 进制
  cout << "8 进制 (oct, showbase): " << i << endl;
  cout << hex; // 切换 16 进制
  cout << "16 进制 (hex, showbase): " << i << endl;
  cout << uppercase;
  cout << "16 进制 (hex, showbase, uppercase): " << i << endl;
  // 恢复默认，不然会影响后续输出
  cout << dec << noshowbase << nouppercase;

  cout << endl << "==== 字符型 ====" << endl;
  char c = 'a';
  cout << "字符(default): " << c << endl;

  printf("\n==== 布尔型 ====\n");
  bool _true = true;
  bool _false = false;
  cout << "布尔(default): " << _true << endl;
  cout << "布尔(default): " << _false << endl;
  cout << boolalpha;
  cout << "布尔(boolalpha): " << _true << endl;
  cout << "布尔(boolalpha): " << _false << endl;
  cout << noboolalpha;

  printf("\n==== 浮点型 ====\n");
  float f = 123.4567890123456789;
  double d = 123.4567890123456789;
  cout << "float (default): " << f << endl;
  cout << "double(default): " << d << endl;
  cout << fixed;
  cout << "float (fixed 6): " << f << endl;
  cout << "double(fixed 6): " << d << endl;
  cout << hexfloat;
  cout << "float (hexfloat): " << f << endl;
  cout << "double(hexfloat): " << d << endl;
  cout << scientific;
  cout << "float (scientific): " << f << endl;
  cout << "double(scientific): " << d << endl;
  cout << defaultfloat;
  cout << "float (defaultfloat): " << f << endl;
  cout << "double(defaultfloat): " << d << endl;
  cout << fixed;
  cout.precision(20);
  cout << "float (fixed 20): " << f << endl;
  cout << "double(fixed 20): " << d << endl;

  cout << endl << "==== 宽度,对齐,填充 ====" << endl;
  cout << "右对齐: |";
  cout.width(10);
  cout << i << '|' << endl; // 默认右对齐
  
  cout << "左对齐: |";
  cout.width(10);
  cout << left; // 左对齐
  cout << i << '|' << endl;

  cout << "填充符: |";
  cout.fill('_');
  cout.width(10);
  cout << i << '|' << endl;

  cout << "结合浮点的对齐: |";
  cout.precision(10);
  cout.width(20);
  cout.fill(' ');
  cout << fixed;
  cout << d << '|' << endl;

  cout << endl << "==== 其他修饰符 ====" << endl;
  cout << showpos; // 显式正负号
  cout << 123 << endl;
  cout << -123 << endl;
  // internal 和 left right 一样，是对齐方式
  // 不过是将正负号分为两边
  cout << internal;
  cout.fill('0');
  cout.width(10);
  cout << 123 << endl;
  cout.width(10);
  cout << -123 << endl;
}