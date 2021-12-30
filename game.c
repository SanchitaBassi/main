#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     /* king =10 , minister =5 , soldier =2 , thief=0*/
     srand(time(0));

      int  k ,m ,s ,t; 
      k =rand()%10+1;
      m =rand()%5+1;
      s =rand()%2+1;
      t =rand()%1;
       printf(" k=%d \n" ,k );
       printf(" m=%d \n" ,m );
       printf(" s=%d \n" , s);
       printf(" t=%d\n" , t);

       if(k==10)
         printf("Great You are the KING!!\n");
         else{
             if( (k<10) && (m==5))
             printf("You are the minister.\n");
             else{
                 if( (m<5) && (s==2))
                 printf("You are a soldier!.\n");
                 else{
                     if( (s<2) && (t==0))
                     printf("OH,NO!! You are the thief.\n");
                     else 
                     printf("SORRY... You are not part of this game better luck nxt tym.\n");
                 }
             }

         }

       return 0;



}