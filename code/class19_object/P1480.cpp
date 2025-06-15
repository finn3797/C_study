#include <vector>
#include <memory>
#include <iostream>
#include <string>
#include <cmath>

class BigInt
{
    int *digits = nullptr;
    int size = 0;

public:
    BigInt(long long n)
    {
        long long temp = n;
        size = 1;
        while (temp /= 10)
            size++;
        digits = new int[size];
        int index = size - 1;
        do
        {
            digits[index] = n % 10;
            index--;
        } while (n = n / 10);
    }

    BigInt(const std::vector<int> &vec)
    {
        if (vec.empty()){
            size = 1;
            digits = new int[size];
            digits[0] = 0;
            return;
        }
        std::vector<int> res_vec;
        bool flag = false;
        for (auto &x : vec)
        {
            if (x != 0)
            {
                flag = true;
                res_vec.push_back(x);
            }
            else
            {
                if (!flag)
                    continue;
                res_vec.push_back(x);
            }
        }
        size = res_vec.size();
        digits = new int[size];
        for (int i = 0; i < size; i++)
            digits[i] = res_vec[i];
    }

    BigInt(std::string &str) : size(str.length())
    {
        digits = new int[size];
        for (int i = 0; i < size; i++)
            digits[i] = int(str[i] - '0');
    }

    BigInt(BigInt &other) : size(other.size)
    {
        digits = new int[size];
        for (int i = 0; i < size; i++)
            digits[i] = other.digits[i];
    }

    ~BigInt()
    {
        if (digits == nullptr)
            return;
        delete[] digits;
        digits = nullptr;
    }

    BigInt operator/(BigInt &other)
    {
        if (other.size > size || (other.size == size && other.digits[0] > digits[0]))
        {
            BigInt res(0);
            return res;
        }
        std::vector<int> res;
        long long llong = 0, rlong = 0;
        for (long long i = other.size - 1, plus = 1; i >= 0; i--, plus *= 10)
        {
            // llong += digits[i] * plus;
            rlong += other.digits[i] * plus;
        }

        bool start = false;
        for (int i = 0; i < size; i++)
        {
            llong = llong * 10 + digits[i];
            // std::cout << "llong: " << llong << std::endl;
            if (llong >= rlong)
            {
                // std::cout << "llong: " << llong << std::endl;
                res.push_back(llong / rlong);
                llong = llong % rlong;
                start = true;
            }
            else if (llong < rlong)
            {
                // std::cout << "llong: " << llong << " " << start << std::endl;
                if (start)
                    res.push_back(0);
            }
        }

        BigInt result(res);
        return result;
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
    std::string str_a, str_b;
    std::cin >> str_a >> str_b;
    BigInt a(str_a);
    BigInt b(str_b);
    printBigInt(a / b);
}
