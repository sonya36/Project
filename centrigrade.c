#include<stdio.h>
int main()
{ 
    float c,f;
    printf("enter temperature in centrigrade");
    scanf("%f",&c);
    f = (c*9/5)+32;
    printf("the temp %f centrigrade in farenheit is %f",c,f);
}