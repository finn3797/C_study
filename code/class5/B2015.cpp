#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    float a,b;
    std::cout.precision(2);
    std::cout << std::fixed;
    scanf("%f%f", &a, &b);
    printf("%.2f\n", 1 / (1/a + 1/b));
    return 0;
}