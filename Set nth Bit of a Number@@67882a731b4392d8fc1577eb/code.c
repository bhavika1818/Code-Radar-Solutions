// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d", &a);
    scanf ("%d", &b);
    c= (1<<b) | a;
    printf("%d", c);
    return 0;
    }