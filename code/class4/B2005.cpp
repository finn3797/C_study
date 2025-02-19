#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
    // char n;
    // scanf("%c", &n);
    // printf("  %c  \n", n);
    // printf(" %c%c%c \n", n, n, n);
    // printf("%c%c%c%c%c\n", n, n, n, n, n);

    char c;
    std::cin >> c;
    std::cout << "  " << c << "  \n";
    std::cout << " " << c << c << c << " \n";
    std::cout << c << c << c << c << c << "\n";
    return 0;
}