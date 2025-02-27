// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    c= a & ~(1<<b);
    printf("%d",c);
    return 0;
}