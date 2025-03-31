// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(i=1,i<=N,i++){
        for(j=N,j>=0,j--){
            printf("* ");
        }
        printf("\n");
    }
}