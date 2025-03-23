 #include <vector>
 #include <iostream>
 #include <algorithm>
 #include <string>
 #include <stdio.h>
 
 void judge(std::string &v, int score){
    int a = 0;
    int b = 0;
    for (int i = 0; i < v.length(); i++){
        if (v[i] == 'E') {
            std::cout << a << ":" << b << std::endl;
            return;
        }else if (v[i] == 'W'){
            a++;
            if (a >= score && (a - b >= 2  || b - a >= 2)){
                std::cout << a << ":" << b << std::endl;
                a = 0;
                b = 0;
            }
        }else{
            b++;
            if (b >= score && (a - b >= 2  || b - a >= 2)){
                std::cout << a << ":" << b << std::endl;
                a = 0;
                b = 0;
            }
        }
    }
    
 }
 
 
 int main(){
    std::string v;
    std::string c;

    // FIXME: WHY?
    while (std::cin >> c)
        v += c;
    // while (1){
    //     std::string c;
    //     scanf("%s", &c);
    //     v += c;
    //     if (c[c.length()-1] == 'E') break;
    // }
 
     judge(v, 11);
     std::cout << std::endl;
     judge(v, 21);
 }