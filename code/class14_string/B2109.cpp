#include <string.h>
#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

// int main(){
//     char str2[256];
//     std::cin.getline(str2, 256);
//     int re2 = 0;
//     int length = strlen(str2);
//     for (int i=0; i<length; i++){
//         if (isdigit(str2[i])) re2 ++;
//     }
//     std::cout << re2 << std::endl;
//     return 0;
// }


int main(){
    char str[256];
    // std::cin.getline(str, 256);
    fgets(str, 256, stdin);
    int re = 0;
    for (size_t i = 0; i < strlen(str); i++){
        char c = str[i];
        if (isdigit(c)) re++;
    }
    std::cout << re << std::endl;
}