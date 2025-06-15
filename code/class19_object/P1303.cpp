#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

int max(int a, int b) { return a > b ? a : b; }

class BigInt
{
    int *digits = nullptr; // 数字数组，存储数字的每一位
    int size = 0;          // 数字数组的大小
public:
    // 构造函数，用于初始化对象的状态
    BigInt(const BigInt &other)
    {
        size = other.size;
        digits = new int[size];
        for (int i = 0; i < size; i++)
        {
            digits[i] = other.digits[i];
        }
    }
    BigInt(const std::string &str) : size(str.length())
    {
        digits = new int[size];
        for (int i = 0; i < size; i++)
            digits[i] = int(str[i] - '0');
    }

    BigInt(const std::vector<int> &vec) : size(vec.size())
    {
        // std::cout << "size: " << size << std::endl;
        digits = new int[size];
        for (int i = 0; i < size; i++)
        {
            digits[i] = vec[i];
        }
    }

    BigInt &operator+=(const BigInt &other)
    {                                             // 重载 += 运算符，用于将两个大整数相加，并将结果存储在当前对象中
        int max_size = max(size, other.size) + 1; // 找到两个大整数中较大的大小
        int lhd_diff = max_size - size;           // 计算左操作数的位数差
        int rhd_diff = max_size - other.size;     // 计算右操作数的位数差
        std::string res(max_size, '0');
        int carry = 0;
        for (int i = max_size - 1; i >= 0; i--)
        {
            int lhd = 0, rhd = 0;
            if (i - lhd_diff >= 0)
                lhd = digits[i - lhd_diff];
            if (i - rhd_diff >= 0)
                rhd = other.digits[i - rhd_diff];
            int temp = (int)lhd + (int)rhd + carry;
            carry = temp / 10;
            res[i] = (temp % 10) + '0';
        }

        delete[] digits;
        if (res.front() == '0')
            res.erase(res.begin());

        // 用新结果更新当前对象
        size = res.length();
        digits = new int[size];
        for (short i = 0; i < size; i++)
        {
            digits[i] = res[i] - '0';
        }
        return *this;
    }

    BigInt operator*(const BigInt &other)
    {
        if (size == 1 && digits[0] == 0 || other.size == 1 && other.digits[0] == 0)
            return BigInt("0");
        int res_size = size + other.size;
        // std::cout << "res_size: " << res_size << std::endl;
        std::vector<int> res(res_size, 0);
        std::vector<std::vector<int>> per_quan_vec(other.size, std::vector<int>(res_size, 0));
        for (int i = other.size - 1, j = 0; i >= 0; i--, j++)
        {
            int index = j;
            int carry = 0;
            for (int k = size - 1; k >= 0; k--)
            {
                int temp_num = other.digits[i] * digits[k] + carry;
                per_quan_vec[j][res_size - 1 - index] = temp_num % 10;
                carry = temp_num / 10;
                index++;
            }
        }

        int carry = 0;
        for (auto &vec : per_quan_vec)
        {
            for (int i = res_size - 1; i >= 0; i--)
            {
                // std::cout << vec[i] << " ";
                int temp = (res[i] + vec[i] + carry);
                res[i] = temp % 10;
                carry = temp / 10;
            }
        }
        if (res.front() == 0)
            res.erase(res.begin());

        BigInt result = BigInt(res);
        return result;
    }
    // 析构函数，用于释放对象的资源

    ~BigInt()
    {
        if (digits == nullptr)
            return;
        delete[] digits;
        digits = nullptr;
    }

    friend void printBigInt(const BigInt &bigint);
};

void printBigInt(const BigInt &bigint)
{
    for (int i = 0; i < bigint.size; i++)
    {
        std::cout << bigint.digits[i];
    }
    std::cout << std::endl;
}
int main()
{
    std::string a, b;
    std::cin >> a >> b;
    BigInt c(a);
    BigInt d(b);
    auto res = c * d;
    printBigInt(res);
}