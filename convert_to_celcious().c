#include<stdio.h>

int farenheight_to_celcious (int farenheight);
void main(){
int result,farenheight;
printf("what is the tempreature:");
scanf("%d",&farenheight);
result=farenheight_to_celcious(farenheight);
printf("The temperature in celcious is:%d\n",result);

}


int farenheight_to_celcious (int farenheight){
int celcious;
celcious=(farenheight-32)*5/9;



return celcious;
}
