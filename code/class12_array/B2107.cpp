/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:38:45
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-02-16 16:13:36
 * @FilePath: /code/class12_array/B2107.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,m;
    std::cin >> n >> m;
    int my_matrix[n][m];
    for (int i=0; i < n; i++){
        for (int j=0; j < m; j++){
            std::cin >> my_matrix[i][j];
        }
    }

    int res_matrix[m][n];
    for (int i=0; i < n; i++){
        for (int j=0; j < m; j++){
            res_matrix[j][i] = my_matrix[i][j];
        }
    }


    for(int i=0; i < m; i++){
        for(int j=0, k=n; j < n/2; j++, k--){
            std::swap(res_matrix[i][j], res_matrix[i][k-1]);
        }
    }

     for (int i=0; i < m; i++){
        for (int j=0; j < n; j++){
            std::cout << res_matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    // std::cout << res_matrix[0][0];
}