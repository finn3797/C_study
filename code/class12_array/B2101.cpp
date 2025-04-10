#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
int main(){
    int row, col;
    std::cin >> row >> col;
    int sum = 0;
    for (int rindex=0; rindex < row; rindex++){
        for (int cindex=0; cindex < col; cindex++){
            int x;
            std::cin >> x;
            if (rindex == 0 | cindex == 0 | cindex == col-1 | rindex == row-1)  sum += x;
        }
    }
    std::cout << sum;
}