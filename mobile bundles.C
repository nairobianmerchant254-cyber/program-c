/*
   NAME: ANOLD OBAGA MATONDA
   REG NO.:PA106/G/28766/25
   DESCRIPTION:SIMPLE PROGRAM FOR BUNDLES BILL
   */

    #include<stdio.h>
      int main(){

 int options;
 printf("select data bundles: \n");
 printf("1. 100MB @ KES 50: \n ");
 printf("2. 500MB @ KES 200: \n");
 printf("3. 1GB @ KES 350: \n");
 printf("4. 2GB @ KES 600: \n");


    printf("enter your choice dear customer: ");
    scanf("%d", &options);

switch(options){
case 1:
     printf("you have successfully purchased 100MB @ KES 50");
    break;
case 2:
     printf("you have successfully purchased 500MB @ KES 200");
    break;
case 3:
     printf("you have successfully purchased 1GB @ KES 350");
    break;
case 4:
     printf("you have successfully purchased 2GB @ KES 700");


default:
      printf("invalid input");

      }


      return 0;





   }
