#include <iostream>
#include <string.h>



// TODO: A WA  WHY???
// int main(){
//     char str1[21], str2[21];
//     std::cin >> str1;
//     std::cin >> str2;
//     if (strlen(str1) == 0 || strlen(str2) == 0) std::cout << "No substring" << std::endl;
//     else if (strstr(str1, str2)) std::cout << str2 << " is substring of " << str1 << std::endl;
//     else if (strstr(str2, str1))    std::cout << str1 << " is substring of " << str2 << std::endl;
//     else    std::cout << "No substring" << std::endl;
// }

int main(){
    char str1[21], str2[21];
    std::cin.getline(str1, 21);
    std::cin.getline(str2, 21);
    if (strstr(str1, str2)){
        std::cout << str2 << " is substring of " << str1 << std::endl;
        return 0;
    }
    if (strstr(str2, str1)){
        std::cout << str1 << " is substring of " << str2 << std::endl;
        return 0;
    }
    std::cout << "No substring" << std::endl;
}