#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
#include <string.h>

int main(){
    int n, Q;
    std::cin >> n >> Q;
    std::cin.ignore();
    std::vector<std::string> v(n);
    for (auto &i : v) getline(std::cin, i);
    std::vector<int> answer;
    for (auto &i : v){
        // std::cout << i.c_str() << std::endl;
        char temp[100];
        strcpy(temp, i.c_str());
        char* pch = strtok(temp, "x=");
        std::vector<int> temp_v;
        while(pch != NULL){
            temp_v.push_back(atoi(pch));
            pch = strtok(NULL, "x=");
        }
        answer.push_back((temp_v[2] - temp_v[1]) / temp_v[0]);
        // std::cout << (temp_v[2] - temp_v[1]) / temp_v[0] << std::endl;
    }

    while(Q--){
        int res = 0;
        int start, end;
        std::cin >> start >> end;
        for (int i = start; i < end+1; i++){
           for (auto &j: answer){
            if (j == i){
                res++; 
                break;
            }
           }
        }  
        std::cout << res << std::endl;
    }
    
    
}