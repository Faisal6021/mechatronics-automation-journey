#include <stdio.h>

int main() 
{
   float celsius,Fahrenheit;
   printf("Enter the celsius temperature:");
   scanf("%f",&celsius);
  
   Fahrenheit = (celsius *9.0/5.0) + 32.0;
  
   printf("Temp in fahrenheit=%f",Fahrenheit);
   return 0;
}
