// Your code here...
#include<stdio.h>
int main(){
    int N;
    int i,j;
    scanf("%d", &N);
    for(i==1; i<=N; i++){
        for(j==N; j<=i; j--)
        printf("* ");
    }
    printf("\n");
    return 0;
}