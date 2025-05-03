#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <ctype.h>
#include <stdio.h>


int main(){
    int N, k;
    std::cin >> N >> k;
    std::cin.ignore();
    std::vector<std::string> s(N);
    for (auto &i : s) getline(std::cin, i);
    
    for (int i = 0; i < k; i++){
        std::string temp;
        getline(std::cin, temp);
        std::string variable = temp.substr(temp.find('{') + 1, temp.find('}') - temp.find('{') - 1);
        for (auto &j : s){
            if (variable == j.substr(0, j.find(' '))){
                temp.replace(temp.find('{'), temp.find('}') - temp.find('{') + 1, j.substr(j.find(' ') + 1));
                break;
            }
        }
        std::cout << temp << std::endl;
    }
    
}