#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int raw_num;
    scanf("%d", &raw_num);
    int result_array[raw_num];
    for (int i = 0; i < raw_num; i++){
        int num;
        scanf("%d", &num);
        int num_array[num];
        num_array[0] = 1;
        num_array[1] = 1;
        for (int j = 2; j < num; j++){
            num_array[j] = num_array[j-1] + num_array[j-2];
        }
        
        result_array[i] = num_array[num-1];
    }
    for (int& x: result_array) printf("%d\n", x);
}