/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-10 11:23:30
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-10 11:41:30
 * @FilePath: /C_study/code/class9/B2043.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    int x;
    std::cin >> x;
    if (x%3==0 || x%5 == 0 || x%7 == 0){
        if (x%3==0){
            std::cout << "3";
        }
        if (x%5==0){
            std::cout << " 5";
        }
        if(x%7==0){
            std::cout << " 7";
        }
        std::cout << std::endl;
    }else{
        std::cout << "n" << std::endl;
    }
}