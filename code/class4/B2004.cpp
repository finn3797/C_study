// #include <iostream>
// #include <stdio.h>
// #include <format>
// using namespace std;


// int main(){
//     int a, b, c;
//     // scanf("%d%d%d", &a, &b, &c);
//     // printf("%8d %8d %8d",a,b,c);

//     // int a,b,c;
//     cin >> a >> b >> c;
//     // cout.width(8);
//     // cout << right;
//     // cout << a << " ";
//     // cout.width(8);
//     // cout << b << " ";
//     // cout.width(8);
//     // cout << c << endl;

//     // cout << format("{:>8} {:>8} {:>8}",a,b,c) << endl;
//     return 0;
// }
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%8d %8d %8d", a, b, c);
    std::cout.width(8);
    std::cout << right;
}

