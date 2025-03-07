/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-02-17 20:02:32
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-07 13:00:17
 * @FilePath: /C_study/code/class13_vector/B3849.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>

int main() {
    int n, r;
    std::cin >> n >> r;
    std::vector<char> letters;
    for (char c = 'A'; c <= 'Z'; c++) {
        letters.push_back(c);
    }
    std::vector<int> res1;
    std::vector<char> res2;
    while(1){
        int temp = n % r;
        if (temp <= 9 ){
            res1.push_back(temp);
            res2.push_back('}');
        }else{
            res1.push_back(-1);
            res2.push_back(letters[temp-10]);
        }
        n /= r;
        if (n == 0) break;
    }
    for (int i = res1.size()-1; i >= 0; i--){
        if (res1[i] == -1) std::cout << res2[i];
        else std::cout << res1[i];
    }
    std::cout << std::endl;
}