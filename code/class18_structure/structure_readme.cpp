#include <vector>
#include <iostream>
#include <string>

struct Student
{
    int score;
    std::string name;
} stu, stus[100];
int main()
{

    // Student stu, stus[100];
    // Student* pstu = new Student;

    // int n = 8;
    // Student* stus = new Student[8];
    // for (int i = 0; i < 8; ++i){
    //     std::cin >> stus[i].score >> stus[i].name;
    // }
    // sort(stus, stus + n, [Student &a, Student &b]{
    //     return a.score < b.score
    // })

    // Student a = {99, "小明"}；
    // Student a = {99};
    // Student a{99};
    // auto a = Student{99};
    // Student a{.name="小明"}
    // auto& [s, n] = stu;
    // auto& [s, _] = stu;

    // c++:
    // pair<int, string> a;
    // a.first;
    // a.second;

    std::pair<int, std::string> a{99, "xiaoming"};
    auto &[f, s] = a;
    std::cout << f << " " << s << std::endl;

    // auto b = make_pair(80, "xiaozhao");

    // int n = 8;
    // std::vector<pair<int, string>> stus(n);
    // for (auto& [s, f]: stus){
    //     std::cin >> s >> f;
    // }
    // sort(stus.begin(), stus.end());
    // std::tuple<int, int, string> a{99, 7, "xiaoming"};
    // auto& [score, id, name] = a;
    // auto b = make_tuple(80, 8, "xiaozhao");
    // std::get<0>(a);
    // std::get<1>(a);
    // std::get<2>(a);

    // 总结:
    // 结构体struct: 聚合多个数据
    // 可定义在指定的作用域
    // 可以直接赋值，也可以通过花括号进行初始化
    // 结构化绑定： 将成员变量的值绑定为新的变量
    // 内存对齐，按从大到小的顺序定义可以节省空间
    // pair和tuple可以绑定两个和多个数据
    // 自带大小比较的能力
    // 使用emplace代替push性能更佳
}