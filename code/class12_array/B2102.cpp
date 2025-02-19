/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:38:37
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-02-12 12:11:14
 * @FilePath: /code/class12_array/B2102.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AEus
 */
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <vector>


using namespace std;
int main(){
    int matrix_array[5][5];
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cin >> matrix_array[i][j];
        }
    }

    int flag = 0;

    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int row=0,col=0;
            for(int k = 0; k < 5; k++){
                if (matrix_array[i][k] >= matrix_array[i][col]){
                    col = k;
                    // std::cout << k << std::endl; 
                }
                if (matrix_array[k][j] <= matrix_array[row][j]){
                    row = k;
                }
            }

            // std::cout << row+1 << " " << col+1  << std::endl;
            if (row==i && col==j){
                flag = 1;
                std::cout << row+1 << " " << col+1  << " " << matrix_array[row][col] << std::endl;
            }
        }
    }

    if (flag == 0){
        std::cout << "not found" << std::endl;
    }


}