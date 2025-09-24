//C PROGRAM TO PROMPT USER TO ENTER HIS REQUIRMENTS INORDER TO GAIN LOAN FROM A BANK
/*
NAME:ANOLD MATONDA
REG NUMBER:PA106/G/28787/25
*/

#include <stdio.h>

int main() {
    int age;
    float income;

    // prompting  the user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // prompting the user for his/her income
    printf("Enter your annual income in sh: ");
    scanf("%f", &income);

    // check loan eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
