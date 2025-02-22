#include <iostream>
#include <vector>
#include <algorithm>


//TODO:Score 40 6
int main(){
    int n;
    std::cin >> n;
    std::vector<long long> v(n);
    for (int i=0;i<n;i++) std::cin >> v[i];
    
    // std::vector<long long> v1;
    // long long  sum1 = 0;
    // std::vector<long long> v2;
    // long long sum2 = 0;

    std::vector<std::vector<long long>> all_v(2);
    std::vector<long long> sum_v;
    sum_v.push_back(0);
    sum_v.push_back(0);

    while (!v.empty()){
        int tempsum_index = 0;
        // std::cout << "size: " << v.size() << std::endl;
        for (auto& v1:all_v) {
            std::vector<long long> temp_v;
            std::vector<int> index_v;
            int temp_index = 0;
            long long temp_max = v[0];
            int temp_max_index = 0;
            for (auto x:v){
                if (x < sum_v[tempsum_index]){
                    temp_v.push_back(x);
                    index_v.push_back(temp_index);
                }
                if (x >= temp_max){
                    temp_max = x;
                    temp_max_index = temp_index;
                }
                temp_index++;
            }

            // std::cout << temp_v.size() << std::endl;
            if (!temp_v.empty()){
                // std::cout << "123" << std::endl;
                sum_v[tempsum_index] += temp_max;
                v1.push_back(temp_max);
                v.erase(v.begin() + temp_max_index);
            }else {
                // std::cout << "456" << std::endl;
                long long temp_min = v[0];
                int temp_min_index = 0;
                // std::cout << v.size() << std::endl;
                for (int i=0;i<v.size();i++){
                    // std::cout << "test:" << temp_min << std::endl;
                    if (v[i] < temp_min){
                        // std::cout << "temp_Vi:" << temp_v[i] << std::endl;
                        temp_min = v[i];
                        temp_min_index = i;
                        
                    }
                }
                sum_v[tempsum_index] += temp_min;
                v1.push_back(temp_min);
                // std::cout << "aaa:"  << std::endl;
                v.erase(v.begin() + temp_min_index);
            }
            tempsum_index ++;
            if (v.empty()) break;
        }
    }


    for (auto x:all_v){
        long long sum = 0;
        for (auto y:x){
            sum += y;
        }
        std::cout << sum << " ";
    }
}