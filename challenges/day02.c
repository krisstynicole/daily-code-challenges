// VARIABLES FLOAT - DOUBLES //

#include <stdio.h>

int main () {

   // Declare Variables
   float celsius;
   double fahrenheit;

   // Assign the value
   celsius = 25.0f;
   fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

   // Print the result
   printf("%.1f degrees Celsius is equal to %.1f degrees Fahrenheit\n", celsius, fahrenheit);
   return 0;
}
