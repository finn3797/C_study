/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-02-17 20:02:27
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-02-17 20:51:19
 * @FilePath: /C_study/code/class13_vector/B3688.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> raw_p(n);
    for (auto& x:raw_p){
        std::cin >> x;
    }
    for(int i=0;i<n;i++){
        std::vector<int> p(n);
        p[0] = raw_p[n-1];
        p.insert(p.begin()+1,raw_p.begin(),raw_p.end()-1);
        p.resize(n);
        // std::cout << p.size() << std::endl;
        for (auto& x:p){
            std::cout << x << " ";
        }
        std::cout << std::endl;
        raw_p = p;
        if (raw_p[n-1] == n){
            break;
        }
    }
}