#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
std::vector<std::vector<std::vector<char>>> res(2);

//FIXME: TWO WA
bool get_flag(std::vector<char> &uniq_ch, int index){
    bool flag = false;
    for (int i = 0; i < res[index].size(); i++){
        for (int j = 0; j < uniq_ch.size(); j++){
            if (res[index][i][j] != uniq_ch[j]){
                flag = true;
            }
        }
    }
    if (res[index].size() == 0 || flag){
        return true;
    }
    return false;
}


std::vector<char> uniq_char(std::vector<char> line){
    std::vector<char> uniq_ch;
    for (int i = 0; i < 3; i++){
        bool flag = true;
        for (int j = 0; j < uniq_ch.size(); j++){
            if (line[i] == uniq_ch[j]){
                flag = false;
            }
        }
        if (flag){
            uniq_ch.push_back(line[i]);
        }
    }
    std::sort(uniq_ch.begin(), uniq_ch.end());
    return uniq_ch;
}


int main(){
    std::vector<std::vector<char>> ch;
    for (int i = 0; i < 3; i++){
        std::vector<char> line;
        for (int j = 0; j < 3; j++){
            char c;
            std::cin >> c;
            line.push_back(c);
        }
        ch.push_back(line);
    }


    for (auto& line : ch){
        auto uniq_ch = uniq_char(line);
        int index = uniq_ch.size() - 1;
        if (index == 2) continue;
        bool flag = get_flag(uniq_ch, index);
        if (flag){
            res[index].push_back(uniq_ch);
        }
    }

    for (int i = 0; i < 3; i++){
        std::vector<char> line;
        for (int j = 0; j < 3; j++){
            char c = ch[j][i];
            line.push_back(c);
        }
        auto uniq_ch = uniq_char(line);
        int index = uniq_ch.size() - 1;
        if (index == 2) continue;
        bool flag = get_flag(uniq_ch, index);
        if (flag) res[index].push_back(uniq_ch);
    }

    std::vector<char> line = {ch[0][0], ch[1][1], ch[2][2]};
    auto uniq_ch = uniq_char(line);
    int index = uniq_ch.size() - 1;
    if (index != 2){
        bool flag = get_flag(uniq_ch, index);
        if (flag) res[index].push_back(uniq_ch);
    }

    line = {ch[0][2], ch[1][1], ch[2][0]};
    uniq_ch = uniq_char(line);
    index = uniq_ch.size() - 1;
    if (index!= 2){
        bool flag = get_flag(uniq_ch, index);
        if (flag) res[index].push_back(uniq_ch);
    }
    for (auto &line : res){
        std::cout << line.size() << std::endl;
    }
}