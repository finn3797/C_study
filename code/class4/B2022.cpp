#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    double a;
    scanf("%lf", &a);
    printf("%.12lf",a);
    // std::cin >> a;
    // std::cout.precision(12);
    // std::cout << std::fixed;
    // std::cout << a << std::endl;

    return 0;
}