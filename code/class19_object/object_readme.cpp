/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-05-04 19:35:50
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-05-20 08:50:15
 * @FilePath: /C_study/code/class19_object/object_readme.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <string>
// 结构体默认都是公有 public
// 类默认都是私有 private
// 结构体可以继承, 类不可以 ？？？

// struct BigInt
// {
//     /* data */
// private:
//     int *digitis = nullptr;
//     int a;

// public:
//     int size = 0;

// protected: // 保护成员, 只能在类的内部和子类中访问
//     int sign = 0;
//     // friend a;  // 友元函数, 可以访问类的私有成员
// };

class BigInt
{
    int *digits = nullptr; // 数字数组, 存储数字的每一位
    int size = 0;          // 数字数组的大小
    int sign = 0;          // 数字的符号, 1 表示正数, -1 表示负数

public:
    // 构造函数, 用于初始化对象的状态
    // BigInt a("123"s, 1)；
    // BigIng* ptr = new BigInt("123"s, -1);
    // BigInt c = {"789", 1};
    BigInt(const std::string &str, int _sign) : sign(_sign), size(str.length())
    {
        // sign = _sign;
        // size = str.length();
        digits = new int[size];
        // assign str chars to digits
    }
    // BigInt d;
    // BigInt b = 1000;
    BigInt(long long x = 0) {}

    // BigInt d = e;
    // 拷贝构造函数, 用于创建一个新对象, 其状态与另一个对象相同
    BigInt(const BigInt &other) : size(other.size), sign(other.sign) // TODO: 为啥可以直接访问other的成员变量
    {
        digits = new int[size];
        memcpy(digits, other.digits, size * sizeof(int));
    }
    // 析构函数, 用于释放对象的资源
    ~BigInt()
    {
        if (digits == nullptr)
            return;
        delete[] digits; // TODO: 为啥不循环删除，digits是只想的数组的第一个元素的地址，delete只会删除第一个元素吗？
        digits = nullptr;
    }

    BigInt operator+(const BigInt &other)
    {
        // 成员函数, 用于实现两个 BigInt 对象的加法
    }
    BigInt operator()(const BigInt &other)
    {
        // 函数对象，仿函数，重载了()运算符，使得对象可以像函数一样被调用
    }
    explicit operator int()
    {
        // 类型转换函数，用于将 BigInt 对象转换为 int 类型
        // 注意：explicit 关键字用于防止隐式类型转换
        int ret = 0;
        for (int i = 0; i < size; i++)
            ret = ret * 10 + digits[i];
        return ret;
    }

    friend BigInt operator+(int, const BigInt &b); // 友元函数，用于实现 int 类型和 BigInt 对象的加法
    friend class BigFloat;
};

BigInt operator+(int a, const BigInt &b)
{
    BigInt ret;
    b.digits[0] += a; // 友元函数可以访问类的私有成员
    return ret;
}

int main()
{
}

// struct class 仅仅只有默认的访问控制不同
// 访问控制: private, protected, public, friend
// 构造函数用于初始化，析构函数用于对象销毁时做清理
// 成员函数的this指针指向调用该函数的对象
// 运算符重载可以对内置的运算符进行重载