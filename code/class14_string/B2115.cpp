#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
    char str[10001];
    std::cin.getline(str, 10000);
    char res[strlen(str)+1];
    for (int i=0; i<strlen(str); i++){
        if ( ('a' <= str[i] && str[i] <= 'z') ||  ('A' <= str[i] && str[i] <= 'Z') ){      
            if (str[i] == 'a' ){
                res[i] = 'z';
            }else if (str[i] == 'A' ){
                res[i] = 'Z';
            }else{
                res[i] =  str[i] - 1;
            }
        }else{
            res[i] = str[i];
        }
    }
    res[strlen(str)] = '\0';
    std::cout << res << std::endl;
}