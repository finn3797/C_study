/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-03-18 22:44:41
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-03-19 08:55:23
 * @FilePath: /C_study/code/class15_function/P1838.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
bool isin_vector(vector<int> &v, int x){
    for (int y: v){
        if (y == x) return true;
    }
    return false;
}

bool iswin(std::vector<int> &v, int x){
    int row = (x/3 +1) * 3;
    if (isin_vector(v, row) && isin_vector(v, row-1) && isin_vector(v, row-2)){
        return true;
    }
    int col = x%3;
    if (col == 0) col = 3;
    if (isin_vector(v, col) && isin_vector(v, col+3) && isin_vector(v, col+6)){
        return true;
    }
    if (x == 3 || x == 7 || x == 5){
        if (isin_vector(v, 3) && isin_vector(v, 7) && isin_vector(v, 5)){
            return true;
        }
    }
    return false;
}


int main(){
    long long n;
    std::cin >> n;
    std::vector<int> nums,a,uim;
    do{
        int temp = n%10;
        nums.push_back(temp);
        n/=10;
    }while(n != 0);
    for (int i = nums.size()-1,  flag=1; i >=0; i--, flag=!flag){
        if (flag) a.push_back(nums[i]);
        else uim.push_back(nums[i]);
    }

    if (nums.size() < 9){
        if (a.size() > uim.size()){
            std::cout << "xiaoa wins." << std::endl;
        }else{
            std::cout << "uim wins." << std::endl;
        }
    }else{
        if (a.size() > uim.size()){
            int back_int = a.back();
            bool flag = iswin(a, back_int);
            if (flag) std::cout << "xiaoa wins." << std::endl;
            else std::cout << "drew." << std::endl;
        }else{
            int back_int = uim.back();
            bool flag = iswin(uim, back_int);
            if (flag) std::cout << "uim wins." << std::endl;
            else std::cout << "drew." << std::endl;
        }
    }    
}