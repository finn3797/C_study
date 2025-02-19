#include <stdio.h>
#include <algorithm>

int main(){
    int a,b,n;
    scanf("%d %d %d", &a, &b, &n);
    float res = float(a)/float(b);
    int result = int(res * n * 10) % 10;
    printf("%d", result);
}