#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>


using namespace std;

int main(){
    int candy_array[5];
    for(int& candy:candy_array) scanf("%d", &candy);
    int eaten = 0;
    for (int i=0;i<5;i++){
        candy_array[(i+1)%5] += candy_array[i] / 3;
        candy_array[(i+4)%5] += candy_array[i] / 3;
        eaten += candy_array[i] % 3;
        candy_array[i] /= 3;
    }
    for (int& x:candy_array) printf("%d ", x);
    printf("\n%d\n", eaten);
    return 0;
}

// int main(){
//     int candy_array[5];
    
//     for(int i=0;i<5;i++){
//         scanf("%d", &candy_array[i]);
//     }
//     int eaten = 0;
//     for (int i=0;i<5;i++){
//         int remain_candy = candy_array[i] / 3;
//         eaten += candy_array[i] % 3;
//         int left,right;
//         if (i == 0){
//             left = 4;
//         }else{
//             left = i -1;
//         }
//         if (i == 4){
//             right = 0;
//         }else{
//             right = i + 1;
//         }
//         candy_array[i] = remain_candy;
//         candy_array[left] += remain_candy;
//         candy_array[right] += remain_candy;
//     }
//     printf("%d %d %d %d %d\n", candy_array[0], candy_array[1], candy_array[2], candy_array[3], candy_array[4]);
//     printf("%d\n", eaten);
// }