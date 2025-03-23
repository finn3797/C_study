/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-03-20 18:11:03
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-20 18:53:59
 * @FilePath: /C_study/code/class16_recursion/hanoi.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>


void hanoi(int n, char F, char A, char T){
    if (n == 1){
        printf("Move %d from %c to %c\n", n, F, T);
        return;
    }
    hanoi(n-1, F, T, A);
    printf("Move %d from %c to %c\n", n, F, T);
    hanoi(n-1, A, F, T);
}

int main(){
    hanoi(2, 'F', 'A', 'T');
}