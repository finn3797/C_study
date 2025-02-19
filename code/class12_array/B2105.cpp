/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:38:40
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-02-16 16:15:35
 * @FilePath: /code/class12_array/B2105.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    // cout << n << " " << m << " " << k << "\n";
    int a_array[n][m];
    int b_array[m][k];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a_array[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < k; j++){
            cin >> b_array[i][j];
        }
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            int temp = 0;
            for (int kk = 0; kk < m; kk++){
                temp += (a_array[i][kk] * b_array[kk][j]);
            }
            std::cout << temp << " ";
        }
        std::cout << "\n";
    }
}