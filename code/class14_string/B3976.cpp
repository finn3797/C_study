#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <ctype.h>
#include <string>
#include <stdio.h>



int main(){
    char c[1000001];
    std::cin.getline(c, 1000001);
    int n = strlen(c);
    for (int i = 0; i < n; i++){
        if (isalpha(c[i])) 
            std::cout << c[i];
    }
}