/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-10 11:23:40
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-11 10:08:24
 * @FilePath: /C_study/code/class9/B2047.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    float x;
    float y;
    std::cin >> x;
    std::cout.precision(3);
    std::cout << std::fixed;
    if (x >= 0 && x < 5){
        y = -x + 2.5;
        std::cout << y << std::endl;
    }else if (x >= 5 && x < 10) {
        y = 2 - 1.5 * (x - 3) * (x - 3);
        std::cout << y << std::endl;
    }else {
        y = (x/2 - 1.5);
        std::cout << y << std::endl;
    }
}