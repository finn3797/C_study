#include <iostream>
#include <string>
#include <algorithm>


bool ishaoshu(int i){
    bool flag = false;
    while (i > 0){
        if (flag){
            if (i % 2 == 1){
                return false;
            }
        }else{
            if (i % 2 == 0){
                return false;
            }
        }
        flag = !flag;
        i /= 10;
    }
    return true;
}


int main(){
    int n;
    std::cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++){
        sum += ishaoshu(i);
    }
    std::cout << sum << std::endl;
}