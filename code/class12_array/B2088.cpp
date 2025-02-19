/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:38:14
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-02-04 15:37:03
 * @FilePath: /code/class12_array/B2088.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
    float price_array[] ={28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
    float index_array[10];
    for (float& x:index_array){
        scanf("%f", &x);
    }
    float sum = 0;
    int i = 0;
    for (float x: index_array) {
        // printf("%.1f  %.1f\n", price_array[i], x);
        sum += price_array[i] * x;
        i++;
    }
    printf("%.1f", sum);
}

