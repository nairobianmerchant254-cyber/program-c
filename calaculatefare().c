#include<stdio.h>

int fare_calculated(int distance);

void main(){
int amount,distance;
printf("what is the distance covered:");
scanf("%d.km",&distance);

amount=fare_calculated(distance);
printf("the Total Fare is:\tksh.%d\n",amount);
}

int fare_calculated(int distance){
int totalfare;
totalfare= distance*50;


return(totalfare);
}

