/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2024-10-12 16:54:04
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-07 10:09:34
 * @FilePath: /C_study/code/class7/B2030.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <math.h>

int main(){

    float xa,ya,xb,yb;
    scanf("%f%f%f%f", &xa, &ya, &xb, &yb);
    float result = sqrt(pow(xa-xb,2)+pow(ya-yb,2));
    printf("%.3f\n", result);
    return 0;
}
 