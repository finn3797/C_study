/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:38:20
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-02-12 10:53:50
 * @FilePath: /code/class12_array/B2079.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

//  TODO
int main(){
    int num;
    scanf("%d", &num);
    double sum = 0;
    for (int i = 0; i < num+1; i++){
        // int x;
        double temp=1;
        if (i == 0){
            temp = 1;
        }else{
            for(int j = 1; j <= i; j++){
                temp *= j;
            }
        }
        sum += 1/(double)temp;
    }
    printf("%.10f", sum);
}