/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:20:12
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-21 05:21:55
 * @FilePath: /code/class11_switch/B2074.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <algorithm>

int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    int res = 1;
    while (b--){
        res *= a;
        res %= 7;
    }
    switch (res)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 0:
        printf("Sunday");
        break;
    
    default:
        break;
    }
}