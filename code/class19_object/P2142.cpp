#include <string>
#include <iostream>
#include <vector>


bool max(int* digits1, int size1, int* digits2, int size2){
    if (size1 < size2)
        return false;
    else if(size1 > size2)
        return true;
    else{
        for (int i = 0; i < size1; i++){
            // std::cout << digits1[i] << " : " << digits2[i] << std::endl;
            if (digits1[i] < digits2[i])
                return false;
        }
    }
    return true;
}


class BigInt{
    bool sign = true;
    int size = 0;
    int* digits = nullptr;
    public:
        BigInt(const std::string &str){
            int start = 0;
            if (str.front() == '-'){
                sign = false;
                start = 1;
                size = str.length() - 1;
            }
            else{
                sign = true;
                size = str.length();
            }
            // std::cout << "开始构造，size为:" << size << std::endl;
            if (size != 0){
                digits = new int[size];
                int str_length = str.length();
                for (int i = start, j = 0; i < str_length; i++, j++){
                    digits[j] = int(str[i] - '0');
                }
            }else{
                size = 1;
                digits = new int[size];
                digits[0] = 0;
            }
            
            
        }

        BigInt(std::vector<int> &vec, bool sign): sign(sign){
            int bool_start = 0;
            for (auto x: vec){
                if (x != 0 || vec.size() == 1)
                    break;
                bool_start++;
            }
            size = vec.size() - bool_start;
            // std::cout << "res_size: " << size << std::endl;
            if (size != 0){
                digits = new int[size];
                for (int i = 0; i < size; i++){
                    digits[i] = vec[i+bool_start];
                }
            }else{
                size = 1;
                digits = new int[size];
                digits[0] = 0;
            }
            
        }

        BigInt operator-(BigInt &other){
            bool res_sign = max(digits, size, other.digits, other.size);
            // std::cout << "res_sign: " << res_sign << std::endl;
            int max_size = other.size > size ? other.size : size;
            // std::cout << "max_size: " << max_size << std::endl;
            std::vector<int> temp_digit(max_size, 0);
            int diff_lhs = max_size - size;
            int diff_rhs = max_size - other.size;
            int carry = 0;
            for (int i = max_size - 1; i >= 0; i--){
                int lhsindex = i - diff_lhs;
                int rhsindex = i - diff_rhs;
                int lhsnum = lhsindex < 0 ? 0 : digits[lhsindex];
                int rhsnum = rhsindex < 0 ? 0 : other.digits[rhsindex];

                // std::cout << lhsnum << ":: rhsnum: "<< rhsnum << std::endl;
                int real_lhsnum, real_rhsnum;
                if (res_sign){
                    real_lhsnum = lhsnum;
                    real_rhsnum = rhsnum;
                }else{
                    real_lhsnum = rhsnum;
                    real_rhsnum = lhsnum;
                }
                real_lhsnum = real_lhsnum - carry;
                carry = real_lhsnum >= real_rhsnum ? 0 : 1;
                if (real_lhsnum >= real_rhsnum){
                    carry = 0;
                    temp_digit[i] = real_lhsnum - real_rhsnum;
                    // std::cout << "index i:" << i<< "  num: " << real_lhsnum - real_rhsnum<<std::endl;
                }else{
                    temp_digit[i] = 10 + real_lhsnum - real_rhsnum;
                    // std::cout << "index i:" << i<< "  num: " << 10 + real_lhsnum - real_rhsnum<<std::endl;
                    carry = 1;
                }
            }
            // std::cout << "temp_digit_size: " << temp_digit.size() << std::endl;
            BigInt result(temp_digit, res_sign);
            return result;
        }
        ~BigInt(){
            if (digits == nullptr) return;
            delete[] digits;
            digits = nullptr;
        }
    friend void printBigInt(const BigInt &b);
};


void printBigInt(const BigInt &b){
    // std::cout << b.sign << " ::: " << b.size <<  " " << b.digits[0] <<std::endl;
    if (!b.sign) std::cout << "-";
    for (int i = 0; i < b.size; i++)
        std::cout << b.digits[i];
}


int main(){
    std::string str1, str2;
    std::cin >> str1 >> str2;
    BigInt b1(str1), b2(str2);
    printBigInt(b1 - b2);
}
