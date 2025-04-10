#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    int a[5] = {1, 2, 3, 4, 5};
    std::reverse(a, a+5);
    for (int i=0;i<5;i++){
        std::cout << a[i] << std::endl;
    };
    std::cout << a << std::endl;
    std::vector<int> v(3, 5);
    std::cout << *v.begin() << std::endl;
}