#include <stdio.h>


int main(){
    int a,b,c,d,e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int eated = 0;

    eated += a % 3;
   
    e += a / 3;
    b += a/3;
     a = a / 3;

    eated += b % 3;
    
    a += b / 3;
    c += b/3;
    b = b / 3;

    eated += c % 3;
    b += c / 3;
    d += c/3;
    c = c / 3;

    eated += d % 3;
    c += d / 3;
    e += d/3;
    d = d / 3;


    eated += e % 3;
    d += e / 3;
    a += e/3;
    e = e / 3;

    printf("%d %d %d %d %d\n", a,b,c,d,e);
    printf("%d\n", eated);
    return 0;
}