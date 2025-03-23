#include <iostream> 
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <ctype.h>
#include <stdlib.h>


std::string delzero(std::string s){
    if (s[0] == '0'){
        s.erase(0, 1);
        return delzero(s);
    }else{
        if (s.empty()) return "0"; 
        else return s;
    }
}


void reverse_cha(std::vector <std::string> &vs, char c, int i){
    std::string &s = vs[0];
    if (c == '/' || c == '.'){
        std::string s1 = s.substr(0, i);
        std::string s2 = s.substr(i+1, s.length());
        s2 = delzero(s2);
        std::reverse(s1.begin(), s1.begin() + s1.length());
        std::reverse(s2.begin(), s2.begin() + s2.length());
        s1 = delzero(s1);
        //TODO:  why the stol is nessesary?
        std::cout << stol(s1) << c  << stol(s2) << std::endl;
        return;
    }else if (c == '%'){
        std::string s1 = s.substr(0, i);
        std::reverse(s1.begin(), s1.end());
        std::cout << stol(s1) << c << std::endl;
        return;
    }
}


void reverse_input(std::vector <std::string> &vs){
    std::string &s = vs[0];
    for (int i = 0; i < s.length(); i++){
        if (isdigit(s[i])){
            continue;
        }else{
            reverse_cha(vs, s[i], i);
            return;
        }
    } 
    reverse(s.begin(), s.end());
    s = delzero(s);
    std::cout << s << std::endl;
    return;
}


int main(){
    std::string s;
    std::cin >> s;
    std::vector <std::string> vs;
    vs.push_back(s);
    reverse_input(vs);
}