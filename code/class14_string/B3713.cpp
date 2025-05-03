#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>


int main(){
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> v(m);
    for (auto &i : v) std::cin >> i;
    for (int i = 0; i < n; i++){
        std::string s;
        std::cin >> s;
        for (auto &title: v){
            std::string temp;
            std::cin >> temp;
            std::string real_s;
            real_s = s + ".zip" + '/' + s + '/' + title + '/' + title + ".cpp";
            if (real_s == temp) std::cout << "Fusu is happy!" << std::endl;
            else std::cout << "Fusu is angry!" << std::endl;
        }
        
    }
}