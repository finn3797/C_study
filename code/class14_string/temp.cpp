#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <sstream>
#include <algorithm>


int main(){
    std::string b("abcdefg");
    std::cout << b.capacity() << std::endl;
    std::cout <<  b.length() << std::endl;
    std::cout << b.size() << std::endl;
    std::cout << b[7] << std::endl;
    if (b[7] == '\0'){
        std::cout << "true" << std::endl;
    }else{
        std::cout << "false" << std::endl;
    }
    std::cout << sizeof(b) << std::endl;
    char c[ ] = "abcdefg";
    std::cout << sizeof(c) << std::endl;

}