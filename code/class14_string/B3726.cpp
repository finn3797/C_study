#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>

int main(){
    int n, q;
    std::cin >> n >> q;
    std::vector<std::string> v(n);
    for (auto &i : v) std::cin >> i;
    std::cin.ignore();

    for (int i = 0; i < q; i++){
        char order[1001];
        fgets(order, 1001, stdin);
        std::vector<int> temp;

        char* order_num = strtok(order, " \n");
        while (order_num != NULL){
            temp.push_back(atoi(order_num));
            // std::cout << atoi(order_num) << " ";
            order_num = strtok(NULL, " \n\t\r\f\v");
        }
        // std::cout << std::endl;
        // std::cout << "temp size: " << temp.size() << std::endl;
        if (temp.size() == 4){
            v[temp[2]-1].insert(temp[3], v[temp[1]-1]);
        }else{
            // std::cout << temp[1] << std::endl;
            std::cout << v[temp[1]-1] << std::endl;
        }
    }


}