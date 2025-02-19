#include <iostream>
#include <variant>
#include <vector>
#include <format>
#include <unordered_map>
using namespace std;


// 注1：如果出现显示混乱的情况，可能是字体太大了，按 CTRL 加 '-' 缩小字体，或放大窗口，避免因宽度导致的强制换行"
// 注2：此代码涉及到很多高级知识，不必尝试完全理解。所以仅需关注运行的结果，输出了所有类型的变量两两组合计算的结果"
// 注3：第一行第一列代表用于计算的变量类型，对应的单元格代表计算结果的类型，符合课程所说的隐式转换等级"

int main() {
  // 创建各种类型的变量
  bool b = true;
  char c = 'A';
  short s = 100;
  unsigned short us = 200;
  int i = 42;
  unsigned int ui = 100;
  long long ll = 10000000000;
  unsigned long long ull = 20000000000;
  float f = 3.14f;
  double d = 2.71828;

  // 用 variant 存储各种类型的变量
  using VarType = variant<bool, char, short, unsigned short, int, unsigned int, long long, unsigned long long, float, double>;
  vector<VarType> variables = { b, c, s, us, i, ui, ll, ull, f, d };

  // 定义类型的字符串标识（方便显示）
  vector<string> typeNames = { "bool", "char", "short", "uint16_t", "int", "uint32_t", "long long", "uint64_t", "float", "double" };
  unordered_map<string, string> fullNames;
  for (size_t i = 0; i < variables.size(); i ++) {
    visit([&](auto var) {
      fullNames[typeid(var).name()] = typeNames[i];
    }, variables[i]);
  }

  // 输出表头，每列的类型名
  int width = 11;
  cout << format("{:^{}}|", ' ', width);
  for (auto& name: typeNames) {
    cout << format("{:^{}}|", name, width);
  }
  cout << endl;

  // 输出分割线
  cout << format("{:-^{}}+", '-', width);
  for (auto& _: typeNames) {
    cout << format("{:-^{}}+", '-', width);
  }
  cout << endl;

  // 输出二维表格
  for (size_t i = 0; i < variables.size(); ++i) {
    // 输出每行的类型名
    cout << format("{:^{}}|", typeNames[i], width); 
    for (auto var: variables) {
      visit([&](auto a, auto b) {
        auto result = a + b;
        // 输出变量相加结果的类型
        cout << format("{:^{}}|", fullNames[typeid(result).name()], width); 
      }, variables[i], var);
    }
    cout << endl;
  }
}
