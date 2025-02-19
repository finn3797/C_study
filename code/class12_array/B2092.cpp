/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-20 16:38:30
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-02-16 15:29:41
 * @FilePath: /code/class12_array/B2092.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>


using namespace std;
int main(){
    //TODO
    int lamp_num;
    std::cin >> lamp_num;
    bool lamp_status_array[lamp_num+1];
    for (auto &x:lamp_status_array)  x = false;
    for (int i=2; i<lamp_num+1; i++){
        for( int j=i; j<lamp_num+1; j+=i){
            lamp_status_array[j] = !lamp_status_array[j];
        }
    }
    for (int x=1; x<lamp_num+1; x++){
        if (!lamp_status_array[x]) { std::cout << x << " ";}
    }
    return 0;
}
