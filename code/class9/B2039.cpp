#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int x,y;
    std::cin >> x >> y;
    if (x>y){
        std::cout << ">" << std::endl;
    }else if (x==y){
        std::cout << "=" << std::endl;
    }else {
        std::cout << "<" << std::endl;
    }
}