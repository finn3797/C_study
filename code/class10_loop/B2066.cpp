/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-14 16:20:47
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-14 17:16:52
 * @FilePath: /class10_loop/B2066.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){
    int n;
    std::cin >> n;
    int timesum = 0;
    for(int i=0;i<n;i++){
        int temp;
        float x,y;
        cin >> x >> y >> temp;
        float dis = sqrt(x*x+y*y);
        timesum += int(dis*2 / 50 + (temp*1.5) + 0.5);
    }
    std::cout << timesum << std::endl;
}