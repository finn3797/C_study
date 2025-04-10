#include <iostream>
#include <vector>


int main(){
    // STL    standard template library;
    // vector  动态数组容器 vector <类型> 变量名  申明时无需确定大小;
    std::vector<int> vi;
    std::vector<double> vd;
    std::vector<vector<int>> vvi;
    取值/索引;
    vi[0];
    vi.at(0);
    区别：
    取值：vi[0]  越界不报错，vi.at(0) 越界报错；
    输入/输出：
    for (int i = 0; i < vi.size(); i ++){
        int x;
        std::cin >> x;
        vi.push_back(x);
    }
    for (int i = 0; i < vi.size(); i ++){
        std::cout << vi[i] << std::endl;
    }
    for (auto& x: vi){
        std::cout << x << std::endl;
    }

    初始化：
    std::vector<int> v0(5); // {0, 0, 0, 0, 0}
    std::vector<int> vv1(5, 1);  //{1, 1, 1, 1, 1}
    std::vector<int> vv2{1, 2, 3}; //{1, 2, 3}
    std::vector<int> vv3(vv1); // {0, 0, 0, 0, 0}
    std::vector<std::vector<int>> vv4(2, std::vector<int>(8, 3));
    auto vv5 = std::vector(2, vector(8, 3));

    赋值运算 和 比较运算：
    std::vector<int> vv6 = vv1;
    std::vector<int> vv7 = vv1;
    std::cout << (vv6 == vv7) << std::endl;
    vv1 > vv2;

    
    常用元素：
    std::vector<int> v{1, 2, 3};
    std::cout << v.front() << std::endl;
    std::cout << v.back() << std::endl;
    std::cout << v.size() << std::endl;
    std::cout << v.empty() << std::endl;
    v.clear();
    v.push_back(4);
    v.pop_back();
    重新规定vector大小若比原先大则用零填充若比原先小则～
    v.resize(3);
    v.resize(5, 1);   第二个参数填充

    迭代器：
    v.begin();
    v.end();

    for (vector<int>::iterator it = v.begin(); it!= v.end(); it ++){
        std::cout << *it << std::endl;
    }

    常见成员函数：
    插入元素：
    v.insert(v.begin() + 1, 2);
    v.insert(v.begin() + 1, {2, 3});
    v.insert(v.begin() + 1, v2.begin() + 1, v2.begin() + 3);

    删除元素：
    v.erase(v.begin() + 1);
    v.erase(v.begin() + 1, v.begin() + 3);
    查找元素：





}