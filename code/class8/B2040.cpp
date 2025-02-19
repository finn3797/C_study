/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-07 10:09:12
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-07 11:36:36
 * @FilePath: /C_study/code/class8/B2040.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    unsigned int n;
    scanf("%d", &n);
    if (n >= 10 && n <= 90){
        printf("%d", 1);
    }else{
        printf(0);
    }
}