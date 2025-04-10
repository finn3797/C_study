#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>


void dfs(int n, std::vector<std::vector<bool>> &res, int start_x, int start_y){
    if (n == 1) return;
    int half = n / 2;
    for (int i = start_x; i < start_x + half; i++){
        for (int j = start_y; j < start_y + half; j++){
            res[i][j] = false;
        }
    }
    dfs(half, res, start_x + half, start_y);
    dfs(half, res, start_x, start_y + half);
    dfs(half, res, start_x + half, start_y + half);
}


int main(){
    int n;
    std::cin >> n;
    n = pow(2, n);
    std::vector<std::vector<bool>> res(n, std::vector<bool>(n, true));
    dfs(n, res, 0, 0);
    for (auto& line : res){
        for (bool c: line){
            std::cout << c << " ";
        }
        // for (auto& ch : line){
        //     std::cout << (ch ? "1" : "0") << " ";
        // }
        std::cout << std::endl;
    }
}