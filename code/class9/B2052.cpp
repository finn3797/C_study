/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-10 11:23:45
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-11 10:27:54
 * @FilePath: /C_study/code/class9/B2052.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int a,b;
    char c;
    std::cin >> a >> b >> c;
    if (c=='+' || c=='-' || c=='*' || c=='/'){
        if (c=='+'){
            std::cout << a + b << std::endl;
        }else if (c=='-'){
            std::cout << a - b << std::endl;
        }else if (c=='*'){
            std::cout << a * b << std::endl;
        }else {
            if (b==0){
                std::cout << "Divided by zero!" << std::endl;
            }else {
                std::cout << a / b << std::endl;
            }
        }
    }else{
        std::cout << "Invalid operator!" << std::endl;
    }
}