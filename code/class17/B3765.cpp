#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <memory>   //智能指针
#include <vector>

int main(){
    std::vector<std::vector<int>> v;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::vector<int> v2;
        int num;
        std::cin >> num;
        for (int j = 0; j < num; j++){
            int x;
            std::cin >> x;
            v2.push_back(x);
        }
        v.push_back(v2);
    }
    std::vector<int> temp_res_v{1};
    for (auto& x:v[0]) temp_res_v.push_back(x);
    for (auto& x:v[0])
        for (auto& y:v[x-1]) temp_res_v.push_back(y);
    
    std::vector<int> summary;
    for (auto &x:temp_res_v){
        bool flag = true;
        for (auto &y:summary){
            if (x == y){
                flag = false;
                break;
            }
        }
        if (flag) summary.push_back(x);
    }
    std::cout << summary.size() << std::endl;
}