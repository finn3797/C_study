/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-03-09 15:36:19
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-18 00:07:22
 * @FilePath: /C_study/code/class14_string/B2121.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <string.h>
#include <ctype.h>


// TODO: so weird , only two AC WHY?
int main()
{
    char str[201];
    std::cin.getline(str, 201);
    // char str[]="I am a student,i am studying Programming language C in Peking University.";
    int min_len = 101;
    int max_len = 0;
    char min_str[101];
    char max_str[101];
    char tmp[101];
    strcpy(tmp, "");
    int len = strlen(str);
    for (int i=0; i < len; i++)
    {
        if (isalpha(str[i])){
            int index = strlen(tmp);
            tmp[index] = str[i];
            tmp[index+1] = '\0';
        }else{
            int index = strlen(tmp);
            // tmp[index] = '\0';
            // std::cout << tmp << std::endl;
            if (strlen(tmp) > max_len){
                max_len = strlen(tmp);
                strcpy(max_str, tmp);
            }
            if (strlen(tmp) < min_len){
                min_len = strlen(tmp);
                strcpy(min_str, tmp);
            }
            tmp[0] = '\0';
        }
    }

    // std::cout << tmp << std::endl;
    std::cout << max_str << std::endl;
    std::cout << min_str;
}