/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:38:17
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-02-04 15:50:58
 * @FilePath: /code/class12_array/B2064.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int raw_num;
    scanf("%d", &raw_num);
    int result_array[raw_num];
    for (int i = 0; i < raw_num; i++){
        int num;
        scanf("%d", &num);
        int num_array[num];
        num_array[0] = 1;
        num_array[1] = 1;
        for (int j = 2; j < num; j++){
            num_array[j] = num_array[j-1] + num_array[j-2];
        }
        
        result_array[i] = num_array[num-1];
    }
    for (int& x: result_array) printf("%d\n", x);
}