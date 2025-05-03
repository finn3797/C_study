#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>



// int main(){
//     // int s=5;
//     std::string a;
//     std::cin >> a;
//     char b[sizeof(a)];
//     for (int i = 0; i < a.length()-1; i++){
//         char tmp = a[i] + a[i+1];
//         b[i] = tmp;
//     }
//     b[(a.length())-1] = a[(a.length())-1] + a[0];
//     b[(a.length())] = '\0';
//     std::cout << b << std::endl;
// }


int main(){
    char str[101];
    std::cin.getline(str, 101);
    int length = strlen(str);
    for (int i = 0; i < length-1; i++){
        std::cout << char(str[i] + str[i+1]);
    }
    std::cout << char(str[length-1] + str[0]) << std::endl;
}