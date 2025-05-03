#include <iostream>
#include <vector>
#include <string.h>
#include <ctype.h>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <cmath>


bool ishuiwen(std::string s){
    int n = s.length();
    for (int i = 0, j = n - 1; j > i; i++, j--){
        if (s[i] != s[j]) return false;
    }
    return true;
}

int main(){
    int res = 0;
    std::string s;
    getline(std::cin, s);
    int n = s.length();
    int start = 0;
    int i = 1;
    bool flag = false;
    while (1) {
        std::string mysubstr;
        if (start + i >= n) {
            flag = true;
            mysubstr = s.substr(start);
        }else{
            mysubstr = s.substr(start, i);
        }
        // std::cout << mysubstr << " " << ishuiwen(mysubstr) << std::endl;
        if (ishuiwen(mysubstr)) res++;
        if (flag) break;
        start += i;
        i++;
    }
    std::cout << res << std::endl;

}