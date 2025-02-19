/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-10 11:23:21
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-10 11:32:16
 * @FilePath: /C_study/code/class9/B2035.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n;
    std::cin >> n;
    if (n>0){
        std::cout << "positive" << std::endl;
    }else if (n==0){
        std::cout << "zero" << std::endl;
    }else{
        std::cout << "negative" << std::endl;
    }
}