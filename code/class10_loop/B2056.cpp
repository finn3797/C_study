#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int main(){
    int int_num;
    std::cin >> int_num;
    int sum = 0;
    for(int i=0; i<int_num; i++){
        int temp;
        std::cin >> temp;
        sum += temp;
    }
    float my_average;
    my_average = (float)sum / int_num;
    std::cout.precision(5);
    std::cout << std::fixed;
    std::cout << sum << " " << my_average << std::endl;
}