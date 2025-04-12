#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <memory>   //智能指针

int a;  // 全局变量默认初始化为0
double b = 3.14;
int arr[100] = {};


void func(){
    int c; // 栈区
    static int d; // 静态变量  全局区
    d++;
    std::cout << "d: " << d << std::endl;
}


int main(){
    // 自动生命周期   栈区
    // {
    //     int x = 123;
    //     std::cout << &x << std::endl;
    //     std::cout << x << std::endl;
    // }
    // {
    //     int y;
    //     std::cout << &y << std::endl;
    //     std::cout << y << std::endl;
    // }
    // 静态生命周期  全局区：全局变量、静态变量  代码区：.text .rodata  一般默认2GB
    // std::cout << a << std::endl;
    // func();
    // func();

    // 动态生命周期   堆区
    // 内存大小取决电脑配置，内存不够时会映射到磁盘上
    // void* malloc(size_t size);
    // int* ptr = (int*)malloc(sizeof(int) * 5);
    // for (int i = 0; i < 5; i++){
    //     std::cout << ptr[i] << " ";
    // }
    // int a[] = {1, 2, 3};
    // int* ptr2 = a;
    // std::cout << ptr2[1] << std::endl;

    // int (*ptr3)[5] = (int(*)[5])malloc(sizeof(int) * 5);
    // free(ptr);
    // free(ptr2);
    // free(ptr3);


    // c++ new
    // int* p1 = new int;
    // std::cout << *p1 << std::endl;

    // int* p2 = new int[5](); //初始化为0 
    // std::cout << *(p2+1) << std::endl;
    // int (*p3)[5] = (int(*)[5])new int[5]()

    // int *p4 = new int(5); //初始化为5
    // int *p5 = new int[5]{1, 2, 3, 4, 5}; //初始化为1, 2, 3, 4, 5
    // std::vector<int>* p6 = new std::vector<int>;
    // std::vector<int>* p7 = new std::vector<int>(5, 1); //初始化为1, 1, 1, 1, 1
    // std::vector<int>* p8 = new std::vector<int>{1, 2, 3, 4, 5}; //初始化为1, 2, 3, 4, 5
    // delete p1;
    // p1 = nullptr;
    // delete[] p2;
    // p2 = nullptr;
    // delete[] p3; // 释放数组时，需要使用delete[]，否则会出现内存泄漏的问题，因为delete[]会调用析构函数，而delete不会调用析构函数，所以会出现内存泄漏的问题。
    // p3 = nullptr;
    // delete p4;
    // p4 = nullptr;
    // delete p5;
    // p5 = nullptr;
    // delete p6;
    // p6 = nullptr;
    // delete p7;
    // p7 = nullptr;
    // delete p8;
    // p8 = nullptr;
    // {
    //     std::shared_ptr<int> p1 = std::make_shared<int>(1);
    //     std::cout << *p1 << std::endl;
    //     {
    //         std::shared_ptr<int> p2 = p1;
    //         //delete p2 智能指针自动执行了这句
    //     }
    //     // delete p1 and memory 智能指针自动执行了这句
    //     // 智能指针的引用计数为0时，会自动释放内存, 不管复制多少次
    // }

    // std::unique_ptr<int> p1 = std::make_unique<int>(1);
    // // std::shared_ptr<int> p2 = p1; // 错误，unique_ptr不能复制
    // std::unique_ptr<int> p3 = p1;错误，unique_ptr不能复制


    // std::weak_ptr<int> wp;
    // {
    //     std::shared_ptr<int> sp = std::make_shared<int>(1);
    //     wp = sp;
    //     if (auto p = wp.lock(); p){
    //         std::cout << p << std::endl;
    //         std::cout << *p << std::endl;
    //     }
    // }

    // if (auto p = wp.lock(); p){
    //     std::cout << *p << std::endl;
    // }else {
    //     std::cout << p << std::endl;
    //     std::cout << "wp is expired" << std::endl;
    // }


    //总结
    // 智能指针 <memory>
    // shared_ptr  共享指针  引用计数  线程安全 可以用多个shared_ptr管理同一个对象
    // unique_ptr  独占指针  不可以复制  线程安全  
    // weak_ptr    弱指针    不可以复制  线程安全  常用于解决循环引用

    // C语言  calloc realloc
    // void* calloc(size_t cout, size_t size);
    // void* realloc(void* ptr, size_t size);   // 可以重新分配内存，但是会导致内存移动，效率较低,可以通过内存池优化 TODO:

}
