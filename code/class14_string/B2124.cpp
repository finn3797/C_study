/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-03-09 15:36:01
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-18 00:05:51
 * @FilePath: /C_study/code/class14_string/B2124.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <string.h>
#include <ctype.h>
#include <iostream>


int main(){
    char str[101];
    std::cin.getline(str, 100);
    int len = strlen(str);
    bool flag = true;
    for (int i=0,j=len-1; i < j; i++, j--){
        if (str[i] != str[j]){
            flag = false;
            break;
        }
    }
    if (flag) std::cout << "yes" << std::endl;
    else std::cout << "no" << std::endl;
}