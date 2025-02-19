#include <stdio.h>
#include <iostream>


using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    printf("%s", (( (n==1) || (n==3) || n==5 )) ? "NO" :  "YES");
}
