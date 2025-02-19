#include <iostream>
#include <format>
using namespace std;
// format 格式规范:
// {[arg-id][:[[fill] align][sign][#][0][width][.precision][type]]}
// {[参数id][:[[填充] 对齐][符号][#][0][宽度][.精度][类型]]}
// arg-id: 使用哪个参数
// fill：可以是除了'{','}'之外的任意字母
// align：默认右对齐 (左对齐<) (右对齐>)  (居中对齐^)
// sign: (+ 正数显示正号) (空格 正数多一个空格，负数不影响) (- 正常输出，正数没有符号，负数有符号)
// #: 显示进制符, 0, 0x, 0b
// 0: 对齐时，正负号和数字左右显式，中间填充 0
// width: 输出的宽度，可用{}使用变量
// precision: 保留小数点后的位数，可用{}使用变量
// type: 类型 (整型有 d,o,x,b) (字符型有 c) (浮点型有 f,e,g,a) (字符串型有 s)
int main() {
  cout << format("==== 整型 ====") << endl;
  int i = 255;
  // 在format 中输出 '{'，需要用两个 '{{', '}'同理，
  // 不然会被识别为占位符
  cout << format("10 进制 {{}}: {}", i) << endl;
  cout << format("8 进制 {{:o}}: {:o}", i) << endl;
  cout << format("16 进制 {{:x}}: {:x}", i) << endl;
  cout << format("16 进制(大写) {{:X}}: {:X}", i) << endl;
  cout << format("8 进制(进制符) {{:#o}}: {:#o}", i) << endl;
  cout << format("16 进制(进制符) {{:#x}}: {:#x}", i) << endl;
  cout << format("16 进制(大写、进制符) {{:#X}}: {:#X}", i) << endl;
  cout << format("2 进制 {{:b}}: {:b}", i) << endl;
  cout << format("2 进制(进制符) {{:#b}}: {:#b}", i) << endl;
  cout << format("2 进制(大写，进制符) {{:#B}}: {:#B}", i) << endl;

  cout << endl << format("==== 字符型 ====") << endl;
  char c = 'a';
  int itoc = 97;
  cout << format("正常字符输出 {{}}: {}", c) << endl;
  cout << format("int 以字符输出 {{:c}}: {:c}", itoc) << endl;
  cout << format("char 以十进制输出 {{:d}}: {:d}", c) << endl;

  cout << endl << format("==== 布尔型 ====") << endl;
  bool _true = true;
  bool _false = false;
  cout << format("默认输出 {{}}: {}", _true) << endl;
  cout << format("默认输出 {{}}: {}", _false) << endl;
  cout << format("以十进制输出 {{:d}}: {:d}", _true) << endl;
  cout << format("以十进制输出 {{:d}}: {:d}", _false) << endl;

  cout << endl << format("==== 浮点型 ====") << endl;
  float f = 123.4567890123456789;
  double d = 123.4567890123456789;
  int precision = 20;
  cout << format("默认输出 {{}}: {}", f) << endl;
  cout << format("默认输出 {{}}: {}", d) << endl;
  cout << format("固定小数点位数(默认6) {{:f}}:  {:f}", f) << endl;
  cout << format("固定小数点位数(默认6) {{:f}}: {:f}", d) << endl;
  cout << format("二进制科学计数法 {{:a}}:  {:a}", f) << endl;
  cout << format("二进制科学计数法 {{:a}}: {:a}", d) << endl;
  cout << format("科学计数法 {{:e}}:  {:e}", f) << endl;
  cout << format("科学计数法 {{:e}}: {:e}", d) << endl;
  cout << format("常规模式 {{:g}}:  {:g}", f) << endl;
  cout << format("常规模式 {{:g}}: {:g}", d) << endl;
  cout << format("固定小数点位数(10) {{:.10f}}:  {:.10f}", f) << endl;
  cout << format("固定小数点位数(10) {{:.10f}}: {:.10f}", d) << endl;
  cout << format("固定小数点位数(变量) {{:.{{}}f}}:  {:.{}f}", f, precision) << endl;
  cout << format("固定小数点位数(变量) {{:.{{}}f}}: {:.{}f}", d, precision) << endl;

  cout << endl << format("==== 宽度,对齐,填充 ====") << endl;
  cout << format("右对齐: |{:>10}|", i) << endl;
  cout << format("左对齐: |{:<10x}|", i) << endl;
  cout << format("中对齐: |{:^10x}|", i) << endl;
  cout << format("填充符: |{:_^10x}|", i) << endl;
  cout << format("浮点右对齐: |{:020.10f}|", d) << endl;
  cout << format("用参数对齐: |{:0{}.{}f}|", d, 20, 10) << endl;

  cout << endl << format("==== 其他修饰符 ====") << endl;
  cout << format("+修饰符: {:+}", 123) << endl;
  cout << format("+修饰符: {:+}", -123) << endl;
  cout << format(" 修饰符: {: }", 123) << endl;
  cout << format(" 修饰符: {: }", -123) << endl;
  cout << format("0修饰符: {:-010}", -123) << endl;

  cout << endl << format("==== 占位符 ====") << endl;
  cout << format("{0:_^10b} {0:_^10o} {0:_^10d} {0:_^10x}", 255) << endl;
  cout << format("{2}{1}{0}{3}", 'a', 'b', 'c', 'd') << endl;
}