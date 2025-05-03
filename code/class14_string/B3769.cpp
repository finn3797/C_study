#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string.h>


int main(){
    // int n, m;
    std::string s, t;
    std::cin >> s;
    std::cin >> t;
    // std::cout << s << std::endl << t << std::endl;
    int q;
    std::cin >> q;
    while (q--){
       int a1, a2, b1, b2;
       std::cin >> a1 >> a2 >> b1 >> b2;
       std::string subs, subt;
       subs = s.substr(a1 - 1, a2 - a1 + 1);
       subt = t.substr(b1 - 1, b2 - b1 + 1);
       if (subs == subt) std::cout << "ovo" << std::endl;
       else if (subs > subt) std::cout << "erfusuer" << std::endl;
       else std::cout << "yifusuyi" << std::endl;

    }
}