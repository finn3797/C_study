#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    float a;
    // scanf("%f", &a);
    // printf("%.3f",a);
    std::cin >> a;
    std::cout.precision(3);
    std::cout << std::fixed;
    std::cout << a << std::endl;
    return 0;
}