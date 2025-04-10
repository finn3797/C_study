#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>


void print(int n, int x, int y, std::vector<std::vector<char>> &res){
    if (n == 1){
        res[x][y] = 'X';
        return;
    }
    int m = pow(3, n-2);
    print(n-1, x, y, res);
    print(n-1, x + 2*m, y, res);
    print(n-1, x + m, y + m, res);
    print(n-1, x, y + 2*m, res);
    print(n-1, x + 2*m, y + 2*m, res);
}


int main(){
    while (1){
        int n;
        std::cin >> n;
        if (n == -1){
            break;
        }
        std::vector<std::vector<char>> res(pow(3, n-1), std::vector<char>(pow(3, n-1), ' '));
        print(n, 0, 0, res);
        for (auto& line : res){
            for (auto& c : line){
                std::cout << c;
            }
            std::cout << std::endl;
        }
        std::cout << '-' << std::endl;
    }   
}