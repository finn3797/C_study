#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

struct Student{
    int score;
    std::string name;
};


int main(){
    int num;
    std::cin >> num;
    auto* stup = new Student[num];
    for (int i = 0; i < num; i++) std::cin >> stup[i].score >> stup[i].name;
    std::sort(stup, stup + num, [](Student& a, Student &b) -> bool{
        return a.score > b.score;
    });
    std::cout << stup[0].name;

}