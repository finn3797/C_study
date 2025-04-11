#include <iostream>
#include <vector>
#include <stdlib.h>

int dat = 1;
char bss2[1024 * 1024 * 500];
char bss1[1024 * 1024 * 500];
void func(){
    static int static_dat[] = {1, 2, 3, 4, 5};
    std::cout << "static_dat: " << &static_dat << std::endl;
    static int staticBSS;
    std::cout << "staticBSS: " << &staticBSS << std::endl;
    int varInFunc;
    std::cout << "varInFunc: " << &varInFunc << std::endl;
}

int main(){
    char* rodata = "Hello World";
    int* heap1 = (int*)malloc(1024 * 1024 * 100);
    int* heap2 = new int[256 * 1024 * 200];
    int* heap3 = new int[256 * 1024 * 400];
    int VarInMain;
    func();


    std::cout << (void *)&func << std::endl;
    std::cout << (void *)&main << std::endl;
    std::cout << (void *)rodata << std::endl;
    
    // 内存四区  这个过时啦
    // 代码区  .text .rodata  readonly
    // 全局区  .data .bss  //默认有2GB的内存  bss block started by symbol
    // 堆区  向下增长
    // 栈区  向上增长    //8M左右


    // 自动生命周期   栈区
    // 动态生命周期   堆区
    // 静态生命周期  全局区  代码区

    

}