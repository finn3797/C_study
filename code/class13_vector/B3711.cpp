/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-02-17 20:02:46
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-02-19 23:12:05
 * @FilePath: /C_study/code/class13_vector/B3711.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int t;
    std::cin >> t;
    std::vector<long> digit_v(19);
    digit_v[0] = 1;
    for (int i=1;i<19;i++){
        long long  temp = 1;
        for (int j=0;j<i;j++){
            temp *= 10;
        }
        digit_v[i] = temp;
    }
    std::vector<std::vector <int>> all_v;
    for (int i=0;i<t;i++){
        int n;
        std::cin >> n;
        int vec_size=0;
        for (int i=0;i<19;i++){
            if (n/digit_v[i] == 0) break;
            else vec_size++;
        }
        std::vector<int> v(vec_size);
        for (int i=vec_size-1,j=0;i>=0;i--,j++){
            v[j] = (n/digit_v[i]) % 10;
        }
        all_v.push_back(v);
    }

    for (auto v:all_v){
        
        bool flag = true;
        long long res = 0;
        for (int j=0,k=v.size()-1;j<v.size();j++,k--){
            res += v[j] * digit_v[k];
        }
        if (res % 4 == 0){
            flag = false;
            std::cout << "YES" << std::endl;
            break;
        }
        for (int i=v.size()-1,h=1;i>0;i--,h++){


            for (int j=0;j<=v.size()-h-1;j++){
                std::vector<int>  temp_v = v;
                if (j==0) temp_v.erase(temp_v.end()-h);
                else temp_v.erase(temp_v.end()-h-j, temp_v.end()-h+1);
                
                long long res = 0;
                for (int j=0,k=temp_v.size()-1;j<temp_v.size();j++,k--){
                    res += temp_v[j] * digit_v[k];
                }
                // std::cout << v.size()-h-j << " " << v.size()-h << " " << res << std::endl;
                if (res % 4 == 0){
                    flag = false;
                    std::cout << "YES" << std::endl;
                    break;
                }
                
            }
            if (!flag) break;
        }
        if (flag) std::cout << "NO" << std::endl;
    }

}
