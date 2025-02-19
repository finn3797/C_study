#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int a,b;
    int res=1;
    std::cin >> a >> b;
    for (int i=0; i<b; i++){
        res *= a;
    }
    std::cout.width(3);
    std::cout.fill('0');
    std::cout << res%1000 << std::endl;
}