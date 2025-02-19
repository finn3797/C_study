#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int main() {
    int m;
    scanf("%d", &m);
    int n;
    scanf("%d", &n);
    int res = 0;
    for(int i=0; i<n; i++){
        int temp;
        scanf("%d", &temp);
        if (m-temp <0) break;
        else {
            m -= temp;
            res++;
        }
    }
    printf("%d\n", res);
    printf("%d\n", n-res);
}