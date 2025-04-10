#include <iostream>


int main(){
    // 数组定义
    int char bool double 
    类型 数组名[长度]
    int intArray[10];
    double doubleArray[5];
    int n;
    std::cin >> n;
    bool boolArray[n];

    // 直接访问数据，会得到该数组的内存地址
    for(int i = 0; i < 10; i++){
        std::cin >> intArray[i];
    }
    for (int i = 0; i < 10; i++){
        std::cout << intArray[i] << std:endl;
    }

    for (auto& x: intArray){
        std::cout << x << std::endl;
    }

    // int intArray[10]; {?,?,?,?,?,?,?,?,?,?}
    // int intArray[10] = {};  {0,0,0,0,0,0,0,0,0,0}
    // int intArray[10] = {1, 2, 3};  {1,2,3,0,0,0,0,0,0,0}
    // int intArray[] = {1, 2, 3};    {1,2,3}
    #include <algorithm>
    fill(intArray, intArray + 10, 1);
    fill(intArray + 3, intArray + 8, 2);
    #include <string.h>
    memset(intArray, 0, 40);
    memset(intArray, 0, sizeof(int) * 10);
    memset(intArray, 0, sizeof(intArray));
    memset(intArray + 3, -1, sizeof(int)*5);


    多维数组
    初始化
    int grid[4][5];
    int grid[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8},
        {11}
    };
    访问
    grid[1][2];


    summary
    固定大小   声明时确定，无法改变；
    连续存储   内存中连续，快速访问；
    相同类型   所有元素的类型相同；
    下标访问   下标从0开始；
    多维数组   增加方括号；
}