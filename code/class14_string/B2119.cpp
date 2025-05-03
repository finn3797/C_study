/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-03-09 15:35:57
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-17 20:07:55
 * @FilePath: /C_study/code/class14_string/B2119.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <string.h>


int main(){
    char str[33];
    std::cin >> str;
    int length = strlen(str);
    if ( (str[length-2] == 'e' && str[length-1] == 'r' ) || (str[length-2] == 'l' && str[length-1] == 'y' ) ){
        for (int i = 0; i < length-2; i++) std::cout << str[i];
    }else if (length > 3 && (str[length-3] == 'i' && str[length-2] == 'n' && str[length-1] == 'g' )){
        for (int i = 0; i < length-3; i++) std::cout << str[i];
    }else{
        std::cout << str;
    }
}


