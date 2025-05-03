/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-03-09 15:35:51
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-17 19:36:18
 * @FilePath: /C_study/code/class14_string/B2116.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <stdio.h>
#include <string.h>


// int main(){
//     char str[51];
//     std::cin >> str;
//     int len = strlen(str);
//     for (int i = len-1; i >= 0; i--){
//         char res, start, end;
//         if (islower(str[i])){
//             res = toupper(str[i]);
//             end = 'Z';
//             start = 'A';
//         }else{
//             res = tolower(str[i]);
//             end = 'z';
//             start = 'a';
//         }
//         res += 3;
//         if (res > end){
//             res = start + (res - end - 1);
//         }
//         std::cout << res;
//     }
// }


int main(){
    char str[51];
    std::cin >> str;
    size_t len = strlen(str);

    for (int i = len-1; i >= 0; i--){
        char c = str[i];
        if (islower(c)){
           c = toupper(c);
           c += 3;
           std::cout << ((c > 'Z') ? char(c-'Z' + 'A' - 1) : c);
        }else{
           c = tolower(c);
           c += 3;
           std::cout << ((c > 'z') ? char(c-'z' + 'a' - 1) : c);
        }
    }
    std::cout << std::endl;
}
