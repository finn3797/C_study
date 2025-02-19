/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:38:47
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-02-16 20:30:26
 * @FilePath: /code/class12_array/B2108.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <algorithm>
#include <string.h>
#include <format>
#include <math.h>
using namespace std;

int main(){
    int n,m;
    std::cin >> n >> m;
    int raw_matrix[n][m];
    int res_matrix[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int temp;
            std::cin >> temp;
            raw_matrix[i][j] = temp;
            res_matrix[i][j] = temp;
        }
    }
        
    for (int i = 1; i < n-1; i++){
        for (int j = 1; j < m-1; j++) {
            int temp = 0;
            temp += raw_matrix[i][j] + raw_matrix[i-1][j] +raw_matrix[i+1][j] +raw_matrix[i][j-1] + raw_matrix[i][j+1];
            res_matrix[i][j] = (int)round(temp / 5.0);
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) std::cout << res_matrix[i][j] << " ";
        std::cout << std::endl;
    }
        



}