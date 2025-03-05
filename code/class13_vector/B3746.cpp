/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-02-17 20:02:52
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-05 15:33:11
 * @FilePath: /C_study/code/class13_vector/B3746.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <vector>
#include <iostream>
#include <algorithm>

// TODO:so confused
int main(){
    int n,m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> test_index(n);
    std::vector<std::vector<long long>> t_vec(n);
    for (int i=0;i<m;i++){
        int my_index = i+1;
        long long temp;
        std::cin >> temp;
        if (i<n){
            test_index[i].push_back(my_index);
            t_vec[i].push_back(temp);
        }else{
            int min_index = 0;
            long long min_val = -1;
            for (int j=0;j<n;j++){
                long long mysum = 0;
                for (long long x:t_vec[j]){
                    mysum += x;
                }
                if ( min_val == -1){
                    min_val = mysum;
                    min_index = j;
                }else{
                    if (mysum < min_val){
                        min_val = mysum;
                    min_index = j;
                    }
                }
            }
            t_vec[min_index].push_back(temp);
            test_index[min_index].push_back(my_index);
        }
    }
    for (auto line:test_index){
        if (line.empty()){
            std::cout << "0" << std::endl;
        }else{
            for (auto x:line){
                std::cout << x << " ";
            }
            std::cout << std::endl;
        }
    }

}