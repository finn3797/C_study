/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-10 11:23:35
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-10 19:03:22
 * @FilePath: /C_study/code/class9/B2044.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>


using namespace std;

int main(){
    int a,b,c;
    std::cin >> a >> b >> c;
    if ((a<60 && b>=60 && c>=60) || (a>=60 && b<60 && c>=60) || (a>=60 && b>=60 && c<60)) {
        std::cout << 1 << std::endl;
    }else {
        std::cout << 0 << std::endl;
    }
}