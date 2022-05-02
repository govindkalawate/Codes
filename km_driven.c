#include <stdio.h>
int main()
{
float distance,meter,feet,inches,centimeter;
scanf("%f",&distance);
meter=distance*1000; 
feet=distance*3280.84; 
inches=distance*39370.1;
centimeter=distance*100000;
printf("\n%.2f m",meter);
printf("\n%.2f ft",feet); 
printf("\n%.2f in",inches);
printf("\n%.2f cm",centimeter);
return 0;
}