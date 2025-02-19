#include <iostream>
#include <typeinfo>
using namespace std;

// 编译的时候会出警告，因为 int 和 short 无法存储这个数字
// 提示我们可能会出现预期之外的行为
// 但我们的目的就是为了测试验证，所以不用理会这个警告
int main() {
  bool b = true;
  char c = 'a';
  // 用光年这个足够大的数字来看看不同类型的差别
  // 光速是 299792458 米/秒
  // 一年有 365 * 24 * 60 * 60 = 31536000 秒
  // 所以光年有 9454254955488000 米
  // 也可以尝试改成其他数字看看效果
  short s = 9454254955488000;
  unsigned short us = 9454254955488000;
  int i = 9454254955488000;
  unsigned int ui = 9454254955488000;
  long l = 9454254955488000;
  unsigned long ul = 9454254955488000;
  long long ll = 9454254955488000;
  unsigned long long ull = 9454254955488000;
  float f = 9454254955488000;
  double d = 9454254955488000;
  cout << "==== values ====" << endl;
  cout << "bool value: " << b << endl;
  cout << "char value: " << c << endl;
  cout << "short value: " << s << endl;
  cout << "unsigned short value: " << us << endl;
  cout << "int value: " << i << endl;
  cout << "unsigned int value: " << ui << endl;
  cout << "long value: " << l << endl;
  cout << "unsigned long value: " << ul << endl;
  cout << "long long value: " << ll << endl;
  cout << "unsigned long long value: " << ull << endl;
  // 浮点数对于特别大的数字，会默认用科学计数法来描述
  cout << "float value: " << f << endl;
  cout << "double value: " << d << endl;

  cout << endl << "==== size ==== " << endl;
  cout << "bool: " << sizeof(b) << endl; // 1
  cout << "char: " << sizeof(c) << endl; // 1
  cout << "short: " << sizeof(s) << endl; // 2
  cout << "unsigned short: " << sizeof(us) << endl; // 2
  cout << "int: " << sizeof(i) << endl; // 4
  cout << "unsigned int: " << sizeof(ui) << endl; // 4
  // long 的输出并不一定，可能是 4 也可能是 8
  cout << "long: " << sizeof(l) << endl; // ？
  cout << "unsigned long: " << sizeof(ul) << endl; // ？
  cout << "long long: " << sizeof(l) << endl; // 8
  cout << "unsigned long long: " << sizeof(ul) << endl; // 8
  cout << "float: " << sizeof(f) << endl; // 4
  cout << "double: " << sizeof(d) << endl; // 8

  cout << endl << "==== type name ==== " << endl;
  cout << "bool: " << typeid(b).name() << endl; // b
  cout << "char: " << typeid(c).name() << endl; // c
  cout << "short: " << typeid(s).name() << endl; // s
  // 不好用一个字母描述，就取了 s 后边的字母 t 来描述
  cout << "unsigned short: " << typeid(us).name() << endl;
  cout << "int: " << typeid(i).name() << endl; // i
  cout << "unsigned int: " << typeid(ui).name() << endl; // j 是 i 的下一个
  cout << "long: " << typeid(l).name() << endl; // l
  cout << "unsigned long: " << typeid(ul).name() << endl; // m 是 l 的下一个字母
  cout << "long long: " << typeid(ll).name() << endl; // l 是用于 long 的，long long 就只能取 x 了
  cout << "unsigned long long: " << typeid(ull).name() << endl; // y 是 x 的下一个字母
  cout << "float: " << typeid(f).name() << endl; // f
  cout << "double: " << typeid(d).name() << endl; // d

  cout << endl << "==== auto ====" << endl;
  auto auto_b = true;
  auto auto_c = 'a';
  auto auto_i = 123;
  // 数字后面跟着修饰符，可以描述数字的类型，这样 auto 就可以判断了
  // 如果不跟修饰符，整数默认根据数值大小推断成 int, long or long long，小数默认推断成 double
  // 修饰符的大小写不敏感，可以大小写混用，如 Ul,uLL

  // u 代表无符号数，不然默认视为有符号
  // l 代表 long
  // ll 代表 long long
  // f 代表 float
  auto auto_ui = 123u;
  auto auto_l = 123l;
  auto auto_ul = 123Ul;
  auto auto_ll = 123ll; 
  auto auto_ull = 123uLL;
  auto auto_f = 3.14f;
  auto auto_d = 3.14;
  cout << "auto to bool: " << typeid(auto_b).name() << endl;
  cout << "auto to char: " << typeid(auto_c).name() << endl;
  cout << "auto to int: " << typeid(auto_i).name() << endl;
  cout << "auto to unsigned int: " << typeid(auto_ui).name() << endl;
  cout << "auto to long: " << typeid(auto_l).name() << endl;
  cout << "auto to unsigned long: " << typeid(auto_ul).name() << endl;
  cout << "auto to long long: " << typeid(auto_ll).name() << endl;
  cout << "auto to unsigned long long: " << typeid(auto_ull).name() << endl;
  cout << "auto to float: " << typeid(auto_f).name() << endl;
  cout << "auto to double: " << typeid(auto_d).name() << endl;
}