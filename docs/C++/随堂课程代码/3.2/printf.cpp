#include "stdio.h"
// printf 格式规范:
// %[flag][width][.precision][length]type
// %[修饰符][宽度][.精度][类型长度]类型
// flag: -, +, #, 0, 空格
// width: 输出的宽度
// precision: 保留小数点后的位数
// length: 数据的大小，h, l, ll
// type: 类型 (整型有 d,o,x,b,u) (字符型有 c) (浮点型有 f,e,g,a) (字符串型有 s)

// 其中 + 和 空格 过于冷僻，课程视频中没有介绍，这里简单提一下
// +: 正数输出 "+123", 负数照常输出 "-123"
// 空格: 正数输出前会多输出一个空格 " 123"，负数照常输出 "-123"
int main() {
  printf("==== 整型 ====\n");
  int i = 255;
  printf("10 进制 [d]: %d\n", i);
  printf("8 进制 [o]: %o\n", i);
  printf("16 进制 [x]: %x\n", i);
  printf("16 进制(大写) [X]: %X\n", i);
  printf("8 进制(进制符) [#o]: %#o\n", i);
  printf("16 进制(进制符) [#x]: %#x\n", i);
  printf("16 进制(大写、进制符) [#X]: %#X\n", i);
  long long ll = 2147483648123;
  printf("ll 长度错误 [d]: %d\n", ll);
  printf("ll 长度错误 [x]: %x\n", ll);
  printf("ll 长度正确 [lld]: %lld\n", ll);
  printf("ll 长度正确 [llx]: %llx\n", ll); 
  unsigned short us = 65535;
  printf("us 无符号类型错误 [hd]: %hd\n", us);
  printf("us 无符号类型正确 [hu]: %hu\n", us);

  printf("\n==== 字符型 ====\n");
  char c = 'a';
  int itoc = 97;
  printf("正常字符输出 [c]: %c\n", c);
  printf("int 以字符输出 [c]: %c\n", itoc);
  printf("char 以十进制输出 [d]: %d\n", c);

  printf("\n==== 布尔型 ====\n");
  bool _true = true;
  bool _false = false;
  printf("以十进制输出 [d]: %d\n", _true);
  printf("以十进制输出 [d]: %d\n", _false);

  printf("\n==== 浮点型 ====\n");
  float f = 123.4567890123456789;
  double d = 123.4567890123456789;
  int precision = 20;
  printf("固定小数点位数(默认6) [f]:  %f\n", f);
  printf("固定小数点位数(默认6) [lf]: %lf\n", d);
  printf("二进制科学计数法 [a]:  %a\n", f);
  printf("二进制科学计数法 [la]: %la\n", d);
  printf("科学计数法 [e]:  %e\n", f);
  printf("科学计数法 [le]: %le\n", d);
  printf("常规模式 [g]:  %g\n", f);
  printf("常规模式 [lg]: %lg\n", d);
  printf("固定小数点位数(10) [.10f]:  %.10f\n", f);
  printf("固定小数点位数(10) [.10lf]: %.10lf\n", d);
  printf("固定小数点位数(变量) [.*f]:  %.*f\n", precision, f);
  printf("固定小数点位数(变量) [.*lf]: %.*lf\n", precision, d);

  printf("\n==== 宽度,对齐,填充 ====\n");
  printf("右对齐  [10d]: |%10d|\n", i);
  printf("左对齐 [-10d]: |%-10x|\n", i);
  printf("填充0  [010d]: |%10x|\n", i);
  printf("结合浮点对齐 [020.10lf]: |%020.10lf|\n", d);
  printf("用参数对齐     [0*.*lf]: |%0*.*lf|\n", 20, 10, d);

  printf("\n==== 其他修饰符 ====\n");
  printf("%+d\n", 123);
  printf("%+d\n", -123);
  printf("% d\n", 123);
  printf("% d\n", -123);
}