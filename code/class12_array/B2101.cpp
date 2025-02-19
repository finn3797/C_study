/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:38:35
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-02-16 15:33:27
 * @FilePath: /code/class12_array/B2101.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
int main(){

    //TODO
    int row, col;
    std::cin >> row >> col;
    int matrix_array[row][col];
    int sum = 0;
    for (int rindex=0; rindex < row; rindex++){
        for (int cindex=0; cindex < col; cindex++){
            int temp;
            std::cin >> temp;
            matrix_array[rindex][cindex] = temp;
            if (cindex==0 | cindex==(col-1) | rindex==0 | rindex==(row-1)){
                sum += temp;
            }
            // if (cindex==0) sum += temp;
            // if (cindex==(col-1)) sum += temp;
            // if (rindex==0) sum += temp;
            // if (rindex==(row-1)) sum += temp;
        }
    }
    
    // int loop_array[] = {0, row-1};
    // for (int i:loop_array){
    //     for(int j=0; j < col; j++){
    //         if (j!=0 & j!=(col-1)){
    //             sum += matrix_array[i][j];
    //         }
    //     }
    // }
    printf("%d", sum);

}