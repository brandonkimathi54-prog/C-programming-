/*
Name:Brandon Kimathi
Reg No.CT101/G/26548/25
Description:Finding Volume and surface area
*/


#include <stdio.h>
#define PI 3.14159

int main () {
    float radius,height,volume,surfacearea;
    
    //prompt user imput
    
   
    printf("Enter the radius of the cylinder");
scanf("%f" ,&radius);

printf("Enter the height of the cylinder");
scanf("%f" ,&height);

//formulae calculationx
volume= PI *radius *radius *height;
surfacearea=2*PI*radius*radius+2*PI*radius*height;

//output results
printf("volume of the cylinder =%.2f\n",volume);
printf("Surface area of the cylider =%.2f\n",surfacearea);

return 0 ;
}