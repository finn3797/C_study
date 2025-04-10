/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-02-11 16:36:27
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-04-04 15:18:48
 * @FilePath: /C_study/code/class13_vector/vector_readme.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <vector>
#include <iostream>

using namespace std;

// vector  动态数组容器 vector <类型> 变量名  申明时无需确定大小
//  STL容器   standard template library

int main(){
    std::vector<int> vi;
    std::vector<double> vd;
    std::vector<std::vector<int>> vvi;

    for(int i = 0; i < 10; i ++){
        int x = i;
        vi.push_back(x);
    }
    for (int i = 0; i < vi.size(); i ++){
        std::cout << vi[i] << " " << vi.at(i) << std::endl;
    }

    std::vector<int> v0(5); // {0, 0, 0, 0, 0}
    std::vector<int> vv1(5, 1);  //{1, 1, 1, 1, 1}
    std::vector<int> vv2{1, 2, 3}; //{1, 2, 3}

    // vector 支持赋值运算和比较运算
    std::vector<int> vv3(vv1); // {0, 0, 0, 0, 0}
    std::vector<std::vector<int>> vv4(2, std::vector<int>(8, 3));

    /* for (auto& x: v0){
        std::cin >> x;
    } */

   // vector 常用元素
   std::vector<int> v{1, 2, 3};
//    std::cout << v.front() << std::endl;
//    std::cout << v.back() << std::endl;
//    std::cout << v.size() << std::endl;
//    std::cout << v.empty() << std::endl;
   v.clear();
   v.push_back(4);
   v.pop_back();

   //重新规定vector大小若比原先大则用零填充若比原先小则～
   v.resize(3);

   v.resize(5, 1);

   // 迭代器
   v.begin();
   v.end();

//    for (vector<int>::iterator it = v.begin(); it!= v.end(); it ++){
//        std::cout << *it << std::endl;
//    }

   //迭代器可用于删除元素
   std::vector<int> v1{1, 2, 3, 4, 5};
   v1.erase(v1.begin());
    //删除1-3范围内的元素
    v1.erase((v1.begin() + 1), v1.begin() + 3);

    std::vector<int> v2{1, 2, 3};
    v2.insert(v2.begin(), 4);


    std::vector<int> v3{1, 2, 3};
    v3.insert(v3.begin() + 1, {4, 5, 6});

    std::vector<int> v4{1, 2, 3};
    std::vector<int> v5{4, 5, 6};
    v1.insert(v1.end(), v2.begin(), v2.end());

    std::vector <int> a1(6);
    for (std::vector<int>::iterator it = a1.begin(); it != a1.end(); it ++){
        std::cout << *it << std::endl;
    }
    std::cout << "size:" << a1.size() << std::endl;
    for (int i = 0; i < 10; i ++){
        a1.push_back(i);
        std::cout << "1 ";
    }

    for (std::vector<int>::iterator it = a1.begin(); it != a1.end(); it ++){
        std::cout << *it << std::endl;
    }
}

