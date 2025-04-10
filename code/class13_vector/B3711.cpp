/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-02-17 20:02:46
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-04-04 23:13:05
 * @FilePath: /C_study/code/class13_vector/B3711.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>
#include <algorithm>


// TODO: 提交没有AC，但是本地测试是对的
int main(){
    int n;
    std::cin >> n;
    for (int i=0;i<n;i++){
        long long  num;
        std::cin >> num;
        long long raw_num = num;
        std::vector<int> v;
        while (num>0){
            v.push_back(num%10);
            num /= 10;
        }
        std::reverse(v.begin(), v.end());
        bool flag = true;
        if (raw_num % 4 == 0) {
            flag = false;
            std::cout << "YES" << std::endl;
            continue;
        }

        for (int j=0;j<v.size();j++){
            if (!flag) break;
            for (int k=j+1;k<=v.size();k++){
                auto temp_v = v;
                temp_v.erase(temp_v.begin()+j, temp_v.begin()+k);
                long long res = 0;
                long long digit = 1;
                if (temp_v.empty()) continue;
                for (auto &d: temp_v){
                    res = res * 10 + d;
                }
                // for (int i=temp_v.size()-1;i>=0;i--){
                //     res += temp_v[i] * digit;
                //     digit *= 10;
                // }
                // std::cout << res << "  ";
                if (res % 4 == 0){
                    flag = false;
                    std::cout << "YES" << std::endl;
                    break;
                }
            }
        }    
        if (flag) std::cout << "NO" << std::endl;
    }

}
