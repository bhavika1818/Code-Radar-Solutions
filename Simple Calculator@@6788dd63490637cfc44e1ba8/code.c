#include <stdio.h>

int main() {
    float a,b; 
    char c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%c", &c);
    if(c='+'){
        printf("%d",a+b);
    }else if(c='-'){
        printf("%d",a-b);
    }else if(c='*'){
        printf("%d",a*b);
    }else if(c='/'){
        printf("%d",a/b);
    }else{
        printf("error");
    }
    return 0;
}