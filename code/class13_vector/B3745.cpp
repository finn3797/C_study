/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-02-17 20:02:40
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-05 11:11:27
 * @FilePath: /C_study/code/class13_vector/B3745.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>


int main(){
    int n,m,r;
    std::cin >> n >> m >> r;
    std::vector<int> f1(n),p1(n),f2(n),p2(n);
    std::vector<int> order_list(n);
    for (int i=0; i<n; i++) std::cin >> f1[i];
    for (int i=0; i<n; i++) std::cin >> p1[i];
    for (int i=0; i<n; i++) std::cin >> f2[i];
    for (int i=0; i<n; i++) std::cin >> p2[i];
    for (int i=0; i<n; i++) std::cin >> order_list[i];
    for (int i=0; i<n; i++){
        int p1_index = order_list[i] - 1;
        int f1i = f1[p1_index];
        int p1i = p1[p1_index];
        int p2_index = -2;
        int p2_min = 101;
        for (int j=0; j<n; j++){
            int f2i = f2[j];
            int p2i = p2[j];
            if (f2i == f1i & p2i > p1i &p2i < p2_min){
                p2_min = p2i;
                p2_index = j;
            }
        }
        if (p2_index != -2){
            p2.erase(p2.begin() + p2_index);
            f2.erase(f2.begin() + p2_index);
            // std::cout << f2[p2_index] << "  " << p2[p2_index] << std::endl;
        }
    }
    std::cout << p2.size() << std::endl;

    
}