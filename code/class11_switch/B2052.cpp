/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:20:08
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-21 05:10:00
 * @FilePath: /code/class11_switch/B2052.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    int a,b;
    char c;
    cin >> a >> b >> c;
    switch (c)
    {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        if(b == 0){
            printf("Divided by zero!");
        }else{
            printf("%d", a/b);
        }
        break;

    default:
        break;
    }
}