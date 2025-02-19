#include <iostream>
#include <format>

using namespace std;

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a << " " << b << std::endl;
    // std::cout << format("{} {}", a, b) << std::endl;
}

// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     printf("%d %d", a, b);
// }