/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-05-29 15:20:31
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-05-29 16:08:59
 * @FilePath: /C_study/code/class14_string/string2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>  //atoi atoll atof 
#include <string>

int main(){
    // char str[] = "abcd";
    // std::cout << strlen(str) << std::endl;
    
    // char str2[10];
    // scanf("%s", str2);
    // std::cout << strlen(str2) << "   " << sizeof(str2) << std::endl;

    // char str3[11];
    // std::cin.getline(str3, 10);   //abc def
    // fgets(str3, 10, stdin);  //与上行同义


    // string.h   --> strlen strcat拼接   strcpy    strcmp比较字典序大小  strstr
    // char a[] = "abcdef";
    // char b[] = "def";
    // char* c = strstr(a, b);      //找不到为NULL 
    // std::cout << c << std::endl;
    // std::cout << c - a << std::endl;

    // char str[] = "= one + two * (three / four)";
    // char delimiter[] = "=+*(/) ";
    // char* token = strtok(str, delimiter);
    // while (token){
    //     std::cout << token << std::endl;
    //     token = strtok(NULL, delimiter);
    // }
    
    // std::string str;               
    std::string str1 = "012345";    //012345
    std::string str2 = str1;        //012345
    std::string str3(6, '#');       //######
    std::string str4(str1);         //012345
    std::string str5("012345");     //012345
    std::string str6(str1, 2);      //2345
    std::string str7(str1, 2, 2);   //23
    std::string str8("012345", 2);   //01
    std::string str9({48, '1', '2'});   // 012
    std::string str10(str1.begin() + 1, str1.end() - 1);   //12345
}