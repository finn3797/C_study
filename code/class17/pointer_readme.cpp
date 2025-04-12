#include <iostream>
#include <vector>

void clear(int* arr, int n){ //形参  int* arr = int arr[]
    memset(arr, 0, sizeof(int) * n);
}

int add(int a, int b){
    return a + b;
}

int main(){
    // long long ll = 353;
    // std::cout << ll << std::endl;
    // std::cout << &ll << std::endl;
    // std::cout << *(long long *)(&ll) << std::endl;
    // std::cout << "bool: " << *(bool *)(&ll) << std::endl;
    // std::cout << "char: " << *(char *)(&ll) << std::endl;
    // std::cout << "short: " << *(short *)(&ll) << std::endl;
    // std::cout << "int: " << *(int *)(&ll) << std::endl;
    // 指针的定义
    // void* 万能指针， 可以指向任何类型的数据 //TODO:
    // void* ptr;
    // int i = 1;
    // int* ptr = &i;
    // 指针的使用
    // 指针的解引用/取值
    // int var = 1;
    // int* ptr = &var;
    // *ptr = 2;
    // std::cout << var << std::endl;
    // var = 3;
    // std::cout << *ptr << std::endl;
    // void* ptr = &var;
    // *ptr; // 报错， 因为void* 是万能指针， 不能直接解引用
    // Use references when you can, and pointers when you need to.
    // //空指针
    // int* p = nullptr;
    // if (p == nullptr){ }
    // //总结
    // 指针存储的是一段内存地址，等价于无符号长整型
    // 指针的解引用/取值， 可以获取指针指向的内存地址中的值
    // 类型*定义指针，void是特殊类型
    // 不同指针类型间可以直接转换
    // 引用指针一体两面
    // 指针如无赋值需要设置为NULL/nullptr
    // 指针和复合类型
    // uint64_t
    // unsig

    // int x = 1, y = 2;
    // std::cout << "&x: " << &x  << " " << uint64_t(&x) << std::endl;
    // std::cout << "&y: "  << &y  << " " << uint64_t(&y)  << std::endl;
    // // std::cout << (uint64_t(&x) + 4) << std::endl;
    // std::cout << (uint64_t(&x) + 1) << std::endl;   
    // std::cout << (uint64_t(&y) + 1) << std::endl;
    // std::cout << *(int *)(uint64_t(&x) + 4) << std::endl;
    // std::cout << *(int *)(uint64_t(&y) + 4) << std::endl;
    // std::cout << *(int *)(std::min(uint64_t(&x), uint64_t(&y))) << std::endl;

    // int arr[5] = {1, 2, 3, 4, 5};
    // int* ptr = arr; // 等价于 int* ptr = &(arr[0]); 默认做了该隐式转换  隐式转换会丢失大小信息
    // std::cout << sizeof(arr) << std::endl;
    // std::cout << sizeof(ptr) << std::endl;
    // std::cout << typeid(arr).name() << std::endl;
    // std::cout << typeid(ptr).name() << std::endl;




    // int arr2[5] = {1, 2, 3, 4, 5};
    // std::cout << *(arr2 + 1)
    // int (*ptr2)[5] = &arr2; // 真正指向数组， 而不是指向数组的第一个元素，不会丢失大小信息
    // std::cout << *(*ptr2 + 1) << std::endl;

    // using Array5 = int[5];
    // Array5 arr = {1, 2, 3, 4, 5};
    // Array5* ptr = &arr;
    // std::cout << sizeof(ptr) << std::endl;

    // #include <string.h>
    // void clear(int* arr, int n){ //形参  int* arr = int arr[]
    //     memset(arr, 0, sizeof(int) * n);
    // }
    // int arr[5] = {1, 2, 3, 4, 5};
    // clear(arr, 5);

    // void clear(int(*arr)[5]){ //形参  int* arr = int arr[]
    //     memset(arr, 0, sizeof(*arr));
    // }
    // clear(&arr);


    //多维数组指针
    // int matrix[3][4];
    // int (*ptr)[4] = matrix;
    // // std::cout << *ptr << std::endl;
    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 4; j++){
    //         ptr[i][j] = i * 4 + j;
    //     }
    // }
    // int *arr = &(matrix[0][0]);
    // int *arr2 = matrix[0];
    // for (int i = 0; i < 12; i++){
    //     std::cout << arr2[i] << " ";
    // }

    // char *p;
    // std::cout << (void *)p << std::endl;   //char指针会直接打印其字符串遇到/0结束，要获得地址得用void指针  TODO:

    // char str[] = "Hello World";
    // char *pstr = str;
    // std::cout << pstr << std::endl;

    // char ch = 'a';
    // char *pch = &ch;
    // std::cout << pch << std::endl;  //单个字符不适合用指针

    // char* str2 = "123";
    // str2[0] = '0'; // Error: 字符串是常量，不能修改


    //vector 对象指针
    // std::vector<int> vec;
    // std::vector<int>* pvec = &vec;
    // (*pvec).push_back(1);
    // pvec->push_back(2);  //直接对象函数调用

    // std::vector<int>::iterator it = vec.begin();
    // ++it;
    // std::cout << *it << std::endl;


    // 函数指针

    
    // int (*padd)(int, int) = add;
    // std::cout << padd(1, 2) << std::endl;

    // 总结:
    // 通过地址偏移运算得到对应的地址；
    // 使用下标运算符[]可以直接获得对应地址的值；
    // 数组会隐式转换成第一个元素的指针，丢失长度信息；
    // 可以定义数组指针完整得保留数组的信息
    // 字符指针在使用时和字符串类似，都以\0作为结束标志。
    // 对象指针可以直接使用->调用对象的方法。
    // 迭代器可以使用++操作符进行迭代。也可以像指针一样使用*操作符获得对应的值。
    // 函数指针可以像函数一样使用。


    

}