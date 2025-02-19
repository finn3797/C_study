/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-10 11:23:47
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-11 14:34:15
 * @FilePath: /C_study/code/class9/B2053.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;


int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float gen;
    gen = b*b - 4*a*c;
    if (gen < 0){
        printf("No answer!");
    }else if(gen==0){
        float solution;
        solution = (-b)/(2*a);
        printf("x1=x2=%.5f", solution);
    }else{
        float x1, x2;
        x1 = (-b+sqrt(gen))/(2*a);
        x2 = (-b-sqrt(gen))/(2*a);
        printf("x1=%.5f;x2=%.5f", min(x1,x2),max(x1,x2));
    }
}