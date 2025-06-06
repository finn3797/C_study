#include <iostream>
#include <string.h>

int main(){
    // const char* p = "qwe";
    // char a[] = "qwe\0";
    char a[] = "123\0";
    const char *p = &(a[0]);
    std::cout << p << std::endl;
    std::cout << strlen(p) << std::endl;
    // std::cout << p << std::endl;
}