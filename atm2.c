#include <stdio.h>


void fam(){
    printf("Please enter the option of service number you want.\n");
    printf("1.You want to check your current account balance\n");
    printf("2.Deposit money\n");
    printf("3.withdraw money\n");
    printf("4.exit from atm\n");
    printf("\n************************\n");
}



int main(){
       int p,t,a,b,w,x;
       char h;

    printf("\nWELCOME TO THE ATM SERVICES :)!\n");
    printf("\nPlease help us with the pin :)\n");
    scanf("%d" ,&p);

    if(p!= 4080){
    printf("Enter the correct pin \n");
    scanf("%d" , &p);}

    else if(p==4080) 
    printf("WELCOME TO THE ATM SERVICES :)!\n");

    go:
    fam();
    scanf("%d" ,&t);

      
      switch(t){

          case 1:
          printf("Your current account balance is Rs.3500\n");
          
   
          printf("\nDo you want more services from us? (y/n)\n");
              scanf(" %c" ,&h);
     

          if(h=='y'){ goto go;};
          if(h=='n')
           printf("   :) Thank you  for choosing us :)\n");
            break;
           
        
        
           case 2:
          printf("Enter the amount to be deposited\n");
          scanf("%d" ,&a);

          printf("\n\n****PROCESSING****\n\n");
             b=3500+a;
          printf("\nYour new balance is : %d\n" , b);
         
          printf("\nDo you want more services from us? (y/n)\n");
        
          scanf(" %c" ,&h);
          if(h=='y'){goto go ;};
          if(h=='n')
           printf("   :) Thank you  for choosing us :)\n");
           
           break;

          case 3:
          printf("Enter the amount to be withdrawn\n");
          scanf("%d" ,&w);

          printf("\n\n****PROCESSING****\n\n");
          printf("You can collect the cash now\n");
           x=3500-w;
          printf("The remaining balance in your account : %d\n" ,x);
         
          printf("\nDo you want more services from us? (y/n)\n");
       
          scanf(" %c" ,&h);
          if(h=='y'){goto go;};
          if(h=='n')
           printf("   :) Thank you  for choosing us :)\n");
           break;
         

          case 4:
          printf("////**THANK YOU SO MUCH FOR CHOOSING OUR SERVICES**////\n");
          printf("\nDo you want more services from us? (y/n)\n");
       
          scanf(" %c" ,&h);
          if(h=='y'){goto go;};
          if(h=='n')
           printf("   :) Thank you  for choosing us :)\n");
           break;
         


          break;

          default:
          printf(" \n\nPlease select a correct option :) \n\n");  
           goto go;
   
       
       }

} 