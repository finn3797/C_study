/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2025-01-10 11:23:37
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2025-01-10 19:09:03
 * @FilePath: /C_study/code/class9/B2046.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int unlock = 23;
    int bikebegin = 27;
    int bike_speed = 3;
    float walk_speed = 1.2;
    int mi;
    std::cin >> mi;
    float walk_time;
    walk_time = mi / walk_speed;
    float bike_time;
    bike_time = (mi) / bike_speed + bikebegin + unlock;
    if (walk_time < bike_time) {
        std::cout << "Walk" << std::endl;
    }else if (walk_time == bike_time) {
        std::cout << "All" << std::endl;
    }else {
        std::cout << "Bike" << std::endl;
    }
}