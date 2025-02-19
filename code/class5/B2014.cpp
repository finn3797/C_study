/*
 * @Author: finn3797 379723586@qq.com
 * @Date: 2024-10-07 10:01:47
 * @LastEditors: finn3797 379723586@qq.com
 * @LastEditTime: 2024-12-12 11:47:37
 * @FilePath: /code/class5/B2014.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// #include <stdio.h>
// #include <iostream>

// int main(){
//     // float a;
//     // float t=3.14159;
//     // scanf("%f", &a);
//     // printf("%.4f %.4f %.4f\n", 2*a, 2*t*a, t*a*a);
//     // return 0;
//     double a;
//     std::cin >> a;
//     double t=3.14159;
//     std::cout.precision(4);
//     std::cout << std::fixed;
//     std::cout << 2*a << " " << 2*t*a << " " << t*a*a << std::endl;

// }


#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    double r;
    double t=3.14159;
    scanf("%lf", &r);
    printf("%.4lf %.4lf %.4lf", 2*r, 2*t*r, t*r*r);
}