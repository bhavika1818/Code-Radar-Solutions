#include <stdio.h>

int main() {
    int i, count=0;
    int num;
    scanf("%d", &num);
    for (i=1;i<=num;i++){
        if(num%i==0)
        count+=1;
    }
    if(num==0 || num==1){
        printf("Not Prime");
    }else if(count>2){
        printf("Not Prime");
    }else{
        printf("Prime");
    }
    return 0;
}