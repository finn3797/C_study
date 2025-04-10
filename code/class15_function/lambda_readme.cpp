#include <iostream>
#include <stdio.h>
#include <vector>


int main(){
    // void sort(Iterator first, Iterator last, Function comparer);
    // bool comparer(int a, int b){
    //     if (a % 2 != b % 2) return a % 2 == 1;
    //     return a < b;
    // }
    int arr[] = {5, 8, 4, 3, 2, 9, 7, 1, 6};
    // sort(arr, arr + 9, comparer);
    std::sort(arr, arr + 9, [](int a, int b) -> bool {
        if (a % 2!= b % 2) return a % 2 == 1;
        return a < b;
    });
    
    // Iterator find_if(Iterator first, Iterator last, Function matcher);
    // bool matcher(int a){
    //     }
    vector<int> vec = {5, 8, 4, 3, 2, 100, 7, 1, 6};
    int target = 100;
    int index = find_if(vec.begin(), vec.end(), [target](int a) -> bool {
        return a > target;
    }) - vec.begin();



    值捕获和引用捕获可以混合使用，但是值捕获的变量不能修改
    [x, &y]
    [&, x]
    [=, &y]

    匿名函数中方括号[]为捕获
    值捕获
    [x]() -> bool {
        x;
        x = 1; // 错误，x是值捕获，不能修改
    }

    [=]() -> bool {
        x, y, z;
    }

    引用捕获
    [&x]() -> bool {
        x;
        x = 1; // 正确，x是引用捕获，可以修改
    }
    [&]() -> bool {
        x, y, z;
    }

    初始化捕获 配合mutable使用
    std::find_if(vec.begin(), vec.end(), [target, int init = 0](int a) mutable -> bool {
        return x > target && ++count == 5;
    })

    //匿名函数必须用auto声明
    auto macher = [target, int init = 0](int a) mutable -> bool {
        return x > target && ++count == 5;
    }

    //匿名函数递归
    auto fib = [](auto& self, int n) -> int {
        if (n <= 2) return 1;
        return self(self, n - 1) + self(self, n - 2);
    }
    fib(fib, 5);

    匿名函数  捕获 参数 返回值 函数体
    [捕获](参数) -> 返回值 {
        函数体
    }

    值捕获 初始化捕获 引用捕获

    声明用auto

    递归用需要将自身作为参数传递
}
