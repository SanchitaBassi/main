/*Check if the triangle is possible by taking its sides as input.*/

#include <stdio.h>

int main(){
    float a,b,c;

    printf("Enter the sides of the triangles.");
    scanf("%f %f %f" , &a, &b,&c);

    if(a+b>c)
        printf("The triangle is possible.");
    else 
       { if(b+c>a)
        printf("The triangle is possible.");
        else 
          {if(a+c>b)
           printf("The triangle is possible.");
           else 
           printf("The triangle is not possible.");
          }
    }
    return 0;
}