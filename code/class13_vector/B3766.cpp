/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-02-17 20:02:36
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-07 12:27:59
 * @FilePath: /C_study/code/class13_vector/B3766.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>


int main(){
    std::vector<int> nums;
    int n;
    int step;
    std::cin >> n >> step;
    for (int i = 0; i < n; i++){
        int temp;
        std::cin >> temp;
        nums.push_back(temp);
    }
    std::vector<int> res_index;
    for (int i = 1; i <= n; i++) res_index.push_back(i);
    for (int i = 0; i < step; i++){
        int order;
        std::cin >> order;
        if (order == 1 | n <= order){
            continue;
        }else{
            std::vector<int> temp_res;
            for (int j = 0; j < order; j++){
                int k = j;
                while(k<n){
                    temp_res.push_back(res_index[k]);
                    k += order;
                }
            }
            res_index = temp_res;
        }
    }
    for (auto& x:res_index) std::cout << nums[x-1] << " ";
    std::cout << std::endl;
    return 0;
}