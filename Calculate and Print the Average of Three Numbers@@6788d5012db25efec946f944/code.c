#include <stdio.h>

int main() {
    float a,b,c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    int average = (a+b+c)/3;
    printf("Average: %f", average);
    return 0;
}