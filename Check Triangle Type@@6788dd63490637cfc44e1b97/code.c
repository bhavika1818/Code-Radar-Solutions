#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a=b=c){
        printf("Equilateral");
    // }else if(a==b!=c || b==c!=a || a==c!=b){
    //     printf("Isosceles");
    }else if(a!=b!=c){
        printf("Scalene");
    }else{
        printf("Isosceles");
    }
    return 0;
}