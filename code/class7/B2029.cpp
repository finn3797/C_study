#include <iostream>
#include <math.h>


int main(){
    float h,r;
    std::cin >> h >> r;
    float t = 3.14;
    float need_water = 20;
    int result = ceil(need_water*1000/(t*r*r*h));
    std::cout << result << std::endl;
    return 0;
}



