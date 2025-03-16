/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-03-09 15:35:45
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-16 15:33:15
 * @FilePath: /C_study/code/class14_string/B2113.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>



int main(){
    // int s=5;
    std::string a;
    std::cin >> a;
    char b[sizeof(a)];
    for (int i = 0; i < a.length()-1; i++){
        char tmp = a[i] + a[i+1];
        b[i] = tmp;
    }
    b[(a.length())-1] = a[(a.length())-1] + a[0];
    b[(a.length())] = '\0';
    std::cout << b << std::endl;
}