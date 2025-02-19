#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int x,n;
    std::cin >> x >> n;
    // float c = 1.001;
    std::cout.precision(4);
    std::cout << std::fixed;
    std::cout << pow(1.001, n) * x << endl;
    return 0;
}