#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


long long vsum(std::vector<long long> &v){
    if (v.empty()) return 0;
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}

long long vmin(std::vector<long long> &v){
    long long temp_min = 0;
    for (auto vx: v){
        if (temp_min == 0) temp_min = vx;
        if (vx < temp_min) temp_min = vx;
    }
    return temp_min;
}

std::vector<long long> vmax(std::vector<long long> &v, long long x){
    long long temp_max = v[0];
    long long index=0;
    for (int i = 1; i < v.size(); i++){
        long long vx = v[i];
        if (x){
            if (vx < x && vx < temp_max) {
                temp_max = vx;
                index = i;
            }
        }else{
            if (vx < temp_max){
                temp_max = vx;
                index = i;
            }
        }
    }
    std::vector<long long> res;
    res.push_back(temp_max);
    res.push_back(index);
    return res;

}

int getlessnum(std::vector<long long> v, int x){
    if (x == 0) return 0;
    int res = 0;
    for (auto vx: v){
        if (vx < x) res++;
    }
    return res;
}


int main(){
    int n;
    std::cin >> n;
    std::vector<long long> v, v1, v2;
    for (int i = 0; i < n; i++){
        long long x;
        std::cin >> x;
        v.push_back(x);
    }
    
    bool flag = false;

    while (!v.empty()){
        if (flag){
            long long mysum = vsum(v1);
            long long myvmin = vmin(v);
            // std::cout << "vmin: " << myvmin << std::endl;
            if (mysum <= myvmin) mysum = 0;
            auto res = vmax(v, mysum);
            // std::cout << res[0] << " true " << res[1] << std::endl;
            v1.push_back(res[0]);
            v.erase(v.begin() + res[1]);
        }else{
            long long mysum = vsum(v2);
            long long myvmin = vmin(v);
            // std::cout << "vmin: " << myvmin << std::endl;
            if (mysum <= myvmin) mysum = 0;
            auto res = vmax(v, mysum);
            // std::cout << res[0] << " false " << res[1] << std::endl;
            v2.push_back(res[0]);
            v.erase(v.begin() + res[1]);
        }
        flag = !flag;
        // std::cout << "v.size:" << v.size() << std::endl;
    }

    std::cout << vsum(v2) << " " << vsum(v1) << std::endl;
}