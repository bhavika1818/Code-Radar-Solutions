// Your code here...
#include<stdio.h>
int main(){
    int N;
    int i,j;
    scanf("%d", &N);
    for(i=0;i<N;i++){
        for(j=0; j<N; j++)
    if(i==0|| i==N-1 || j==0 || j==N-1)
    {printf("*");
    }else{
        printf(" ");
    }
    return 0;
}
}