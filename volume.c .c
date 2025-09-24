//PROMPTING USER TO ENTER HEIGHT AND RADIUS TO FIND VOLUME AND AREA
/*
NAME:Anold Matonda 
REG NO:PA106/G/28787/25
*/
#include <stdio.h>

int main() {

    double pi= 3.14285714286;
    double radius;
    double height;
    double surface_area;
    double volume;

//prompting user to enter the height
    printf("what is the height:");
    scanf("%lf",&height);

//prompting user to enter radius
    printf("what is your radius:");
    scanf("%lf",&radius);

    volume =pi*radius*radius*height;
     surface_area =2*pi*radius*radius + 2 * pi * radius * height;


    printf("your surface area is %.2f \n", surface_area);
    printf("your volume is %.2f \n " ,volume);

    return 0;
    }
    