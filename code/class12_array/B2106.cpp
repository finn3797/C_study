#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    int n,m;
    std::cin >> n >> m;
    int my_matrix[m][n];
    for (int i=0; i < n; i++){
        for (int j=0; j < m; j++){
            std::cin >> my_matrix[j][i];
        }
    }

    for (int i=0; i < m; i++){
        for (int j=0; j < n; j++){
            std::cout << my_matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    
}