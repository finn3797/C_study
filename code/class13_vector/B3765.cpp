/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-02-17 20:02:49
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-06 16:40:33
 * @FilePath: /C_study/code/class13_vector/B3765.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>


int main(){
    int N;
    std::cin >> N;
    std::vector<std::vector<int>> web_vec(N);
    for (int i=0; i<N; i++){
        int http_num;
        std::cin >>http_num;
        for (int j=0; j<http_num; j++){
            int temp;
            std::cin >>temp;
            web_vec[i].push_back(temp);
        }
    }

    std::vector<int> res{1};
    for (auto& x:web_vec[0]){
        res.push_back(x);
        for (auto& y:web_vec[x-1]){
            res.push_back(y);
        }
    }

    int summary[N];
    for (int i=0; i<N; i++) summary[i] = 0;
    for (auto& x:res){
        summary[x-1] += 1;
    } 

    int result=0;
    for (auto& x:summary){
        if (x != 0) result += 1;
    }
    
    std::cout << result << std::endl;




}