#include <stdio.h>
#include <iostream>



int main(){
    int x, a, y, b;
    // scanf('%d%d%d%d', &x, &a, &y, &b);
    std::cin >> x >> a >> y >> b;
    double z;
    z = (y*b-a*x)/double(b-a);
    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << z;
    return 0;
    // printf("%.2f", 
}