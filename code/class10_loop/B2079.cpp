#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){
    float n;
    std::cin >> n;
    float res = 1;
    for (int i=1;i<=n;i++){
        int temp = 1;
        for (int j=1;j<=i;j++){
            temp *= j;
        }
        res += 1.0 / temp;
    }
    std::cout.precision(10);
    std::cout << std::fixed;
    std::cout << res << std::endl;
}
