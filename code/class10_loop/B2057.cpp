/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-14 16:20:44
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-14 16:51:15
 * @FilePath: /class10_loop/B2057.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int mymax = 0;
    for(int i=0; i<n; i++){
        int temp;
        std::cin >> temp;
        if (temp > mymax) mymax = temp;
    }
    std::cout << mymax << std::endl;
}