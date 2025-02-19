#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    float a;
    std::cin >> a;
    std::cout.precision(5);
    std::cout << std::fixed;
    printf("%.5f\n", 5 * (a-32) /9);
    return 0;
}

