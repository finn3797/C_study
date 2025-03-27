#include <iostream>
#include <vector>
#include <algorithm>



std::string change_radix(int i, int n){
    std::string result;
    while (i > 0){
        int r = i % n;
        if (r >= 10){
            result.push_back('A' + r - 10);
        }else{
            result.push_back('0' + r);
        }
        i /= n;
    }
    std::reverse(result.begin(), result.end());
    // result.push_back('\0');    //FIXME:为啥这个加上就是错的
    return result;
}

// std::string s = "";
// 	for (; x > 0; x /= p) {
// 		int t = x % p;
// 		s += (t > 9) ? ('A' + t - 10) : ('0' + t);
// 	}
// 	reverse(s.begin(), s.end());
// 	return s;


int main(){
    int n;
    std::cin >> n;
    for (int i = 1; i < n; i++){
        for (int j = 1; j <= i; j++){
            std::string result = change_radix(i*j, n);
            std::string a, b;
            a = change_radix(i, n); 
            b = change_radix(j, n);
            std::cout << a << '*' << b << '=' << result << ' ';
        }
        std::cout << "\n";
    }
}