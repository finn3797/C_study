/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-14 16:21:13
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-14 21:31:16
 * @FilePath: /class10_loop/B2081.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){
    int n;
    std::cin >> n;
    int res=0;
    for (int i=1;i<=n;i++){
        if (i%7==0 || i%10==7 || i/10==7){
            continue;
        }else{
            res += i*i;
        }
    }
    std::cout << res << std::endl;
}


