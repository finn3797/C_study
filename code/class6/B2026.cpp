#include <stdio.h>
#include <iostream>


int main(){
    double a,b;
    std::cin >> a >> b;
    // std::cout << a/b << std::endl;
    std::cout << a-int(a/b)*b;
    return 0;


}

