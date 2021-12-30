#include <stdio.h>

int main(){

    float a,b,c;

    printf("Enter the sides of the triangle.");
    scanf("%f %f %f " , &a,&b,&c);

    if (a+b>c)
    printf("The triangle is possible.");
    else 
    printf("The triangle is not possible.");

    return 0;
}