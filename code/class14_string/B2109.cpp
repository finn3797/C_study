#include <string.h>
#include <iostream>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char str2[256];
    std::cin.getline(str2, 256);
    int re2 = 0;
    int length = strlen(str2);
    for (int i=0; i<length; i++){
        if (isdigit(str2[i])) re2 ++;
    }
    std::cout << re2 << std::endl;
    return 0;
}