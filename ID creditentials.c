//C Program representing user's height,account balance and ID number
/*
Name:ANOLD MATONDA
REG NO:PA106/G/28787/25
*/


#include<stdio.h>
int main(){
int height;
int account_balance;
int ID_number;

//PROMPTING USER TO ENTER HIS HEIGHT
printf("what is your height?");
scanf("%d" ,&height);

//PROMPTING USER TO ENTER ACCOUNT BALANCE
printf("what is your bank account balance?");
scanf("%d" ,&account_balance);

//PROMPTING USER TO ENTER ID NUMBER
printf("what is your ID number?");
scanf("%d" ,&ID_number);

printf("your height is %d \n ",height);
printf("your bank account balance is %d \n " ,account_balance );
printf("your ID number is %d \n " ,ID_number);

return 0;
}
