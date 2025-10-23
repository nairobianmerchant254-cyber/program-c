#include<stdio.h>
int bill(int unit);


void main(){
int electricity,unit;

printf("what is the number of units consumed:\n");
scanf("%d" ,&unit);

electricity=bill(unit);
printf("your electric bill is %d",electricity);
}


int bill(int unit){
int electric_bill;
if(unit<=100){
electric_bill= unit*10;
}
else if(unit<=200){
    electric_bill=1000+(unit-100)*15;
}
else{
    electric_bill=unit*20;
}




return electric_bill;
}
