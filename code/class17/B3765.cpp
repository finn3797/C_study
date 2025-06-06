#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <memory>   //智能指针
#include <vector>

// int main(){
//     std::vector<std::vector<int>> v;
//     int n;
//     std::cin >> n;
//     for (int i = 0; i < n; i++){
//         std::vector<int> v2;
//         int num;
//         std::cin >> num;
//         for (int j = 0; j < num; j++){
//             int x;
//             std::cin >> x;
//             v2.push_back(x);
//         }
//         v.push_back(v2);
//     }
//     std::vector<int> temp_res_v{1};
//     for (auto& x:v[0]) temp_res_v.push_back(x);
//     for (auto& x:v[0])
//         for (auto& y:v[x-1]) temp_res_v.push_back(y);
    
//     std::vector<int> summary;
//     for (auto &x:temp_res_v){
//         bool flag = true;
//         for (auto &y:summary){
//             if (x == y){
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag) summary.push_back(x);
//     }
//     std::cout << summary.size() << std::endl;
// }

// int main(){
//     size_t N;
//     std::cin >> N;
//     std::vector<std::vector<int>> v;
//     for (size_t i = 0; i < N; i++){
//        std::vector<int> v2;
//        size_t num;
//        std::cin >> num;
//        for (size_t j = 0; j < num; j++){
//            int x;
//            std::cin >> x;
//            v2.push_back(x);
//        } 
//        v.push_back(v2);
//     }
//     std::vector<int> res(1, 1);
//     for (auto& x:v[0]){
//         if (std::find(res.begin(), res.end(), x) == res.end()) res.push_back(x);
//     }
//     for (auto& x:v[0]){
//         for (auto& y:v[x-1]){
//             if (std::find(res.begin(), res.end(), y) == res.end()) res.push_back(y);
//         } 
//     }
//     std::cout << res.size() << std::endl;
// }


int main(){
    size_t N;
    std::cin >> N;
    int* ptr[N];
    size_t arr_size[N];
    for (size_t i = 0; i < N; i++){
        size_t num;
        std::cin >> num;
        arr_size[i] = num;
        int* arr = new int[num];
        for (size_t j = 0; j < num; j++){
            int x;
            std::cin >> x;
            arr[j] = x;
        }
        ptr[i] = arr; //ptr[i] = &arr[0
    }

    int res_count[N];
    for (size_t i = 0; i < N; i++) res_count[i] = 0;
    res_count[0] = 1;
    size_t temp_arr_size = arr_size[0];
    for (size_t i = 0; i < temp_arr_size; i++){
        int web_index = ptr[0][i]-1;
        res_count[web_index] += 1;
        for (size_t j = 0; j < arr_size[web_index]; j++){
            int second_web_index = ptr[web_index][j] - 1;
            res_count[second_web_index] += 1;
        }
    }
    int sum = 0;
    for (auto& x: res_count){
        if (x != 0) sum += 1;
    }
    std::cout << sum << std::endl;
}