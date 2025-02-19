/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-14 16:20:55
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-14 17:39:24
 * @FilePath: /class10_loop/B2071.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <algorithm>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int i=1;
    while (i++){
        // printf("%d\n", a%i);
        // printf("%d\n", b%i);
        // printf("%d\n", c%i);
        if ((a%i)==(b%i) && (b%i)==(c%i)) break;
    }
    printf("%d\n", i);
}