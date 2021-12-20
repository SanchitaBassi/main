#include <stdio.h>
#include <conio.h>

int main(){
    float basicpay,dearnessallowance,houserent,grosssalary;
    printf("Enter the basicpay");
    scanf( "%f" , &basicpay);

    dearnessallowance = 0.4 * basicpay;
    houserent = 0.2 * basicpay;
    grosssalary = basicpay + dearnessallowance + houserent;

    printf("The basic pay is %f \n" , basicpay);
    printf("Dearness allowance is %f \n" , dearnessallowance);
    printf("House rent is %f \n" , houserent);
    printf("The total salary is %f \n" , grosssalary);

    return 0; 

}