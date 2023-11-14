#include <stdio.h>

int main()
{

   int celsius;
   float fahrenheit;

   printf("Enter temperature in celsius");
   scanf("%d", &celsius);
   printf("Celsius = %d", celsius);
   fahrenheit = (celsius * 1.8) + 32;
   printf("Fahrenheit = %.2f", fahrenheit);

   return 0;
}
