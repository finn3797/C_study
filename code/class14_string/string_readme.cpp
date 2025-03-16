/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-03-09 15:04:23
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-15 23:05:55
 * @FilePath: /C_study/code/class14_string/string_readme.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <string.h>
#include <iostream>
#include <vector>
#include <stdio.h>

int main(){

    // 定义  字符串为带有终止符的字符数组
    char str1[3];
    for (int i = 0; i < 2; i++){
        std::cin >> str1[i];
    }
    scanf("%2s", str1);


    // std::cout << "str1: " << str1 << std::endl;
    char str2[] = {'c', 'h', 'a', 'r'};
    std::cout << "str2: " << std::strlen(str2) << std::endl;
    std::cout << "str2: " << sizeof(str2) << std::endl;
    char str3[] = "char";
    std::string str4 = "char\0";
    // 结尾隐藏的 '\0'
    std::cout << "str2length: " << std::strlen(str2) << std::endl;
    // 输入
    // 输出
    printf("%s\n", str2);
    std::cout << str3 << std::endl;
    std::cout << "str3length: " << std::strlen(str3) << std::endl;
    std::cout << "str3length: " << sizeof(str3) << std::endl;
    std::cout << "str3: " << str3[2] << std::endl;


    // string.h  method
    char src[] = "test";
    char dst[5];
    std::strcpy(dst, src);
    std::cout << src  << "\t"  <<  dst << std::endl;

    char teststr[20] = "qwe";
    std::strcat(teststr, src);
    std::cout << teststr << std::endl;

    int order = strcmp(src, dst);
    std::cout << order << std::endl;

    
    // char* c = std::strstr(teststr, 'e');
    // std::cout << c << std::endl;


    char str[] = "= one + two * (three / four)";
    char delimiter[] = "=+*/() ";
    char* token = std::strtok(str, delimiter);
    while(token != NULL){
        std::cout << token << std::endl;
        token = std::strtok(NULL, delimiter);
    }


    // memset memcpy

    #include <stdlib.h>
    // atoi atoll atof 
    #include <ctype.h>

    char a= 'a';
    int b = a;
    std::cout << b << std::endl;

}