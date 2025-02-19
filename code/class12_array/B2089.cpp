/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:38:25
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-02-15 21:48:47
 * @FilePath: /code/class12_array/B2089.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//TODO  algorithm swap   reverse
int main(){
    int array_size;
    std::cin >> array_size;
    int res_array[array_size];

    for (int i = 0; i < array_size; i++) std::cin >> res_array[i];
    // for (int i = 0, j = array_size - 1; i < j; i++, j--) std::swap(res_array[i], res_array[j]);
    std::reverse(res_array, res_array+array_size);
    // for (int i = array_size - 1; i >= 0 ; i--) std::cin >> res_array[i];
    for (int x: res_array) std::cout << x << " ";


}