// Your code here...
#include<stdio.h>
int main(){
    int N;
    int i,j;
    scanf("%d", &N);
    for(i=0;i<N;i++){
        for(j=0; j<N; j++)
    if(i==0|| i==N || j==0 || j==N)
    {printf("* ");
    }else{
        printf(" ");
    }
    return 0;
}