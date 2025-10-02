/*
NAME:ANOLD OBAGA MATONDA
REG NO.: PA106/G/28787/25
DESCRIPTION: Simple program for various charges in a company
*/


#include<stdio.h>

int main(){


     float units;
     float bill1,bill2,bill3;

 printf("enter number of units: ");
 scanf("%f",&units );


      bill1 = units*20;
      bill2 = units*25;
      bill3 = units*30;

 if(units>=0 && units<=30){
        printf("your total bill is KES  %.2f",bill1);
     }

   else if(units>=30 && units<=60){

         printf("your total bill is KES %.2f ",bill2);
  }



    else if(units>60){
           printf("your bill is KES %.2f",bill3);

    }
    else{
        printf("invalid input");
    }

  return 0;

}
