/* Fahrenheit a Celsius usando for y const
*Matias Nicolas Fradusco
*26/04/2015
*/

#include <stdio.h>

float getCelsius (int f);

main() {
 	int fahr;
 	const int LOWER = 0;
 	const int UPPER = 300;
 	const int STEP = 20;
 
 for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
     printf ("%3d %6.1f\n", fahr, getCelsius(fahr));
     return 0;
	 }
  
 float getCelsius (int f) {
 	float celsius;
	celsius = (5.0/9.0) * (f - 32.0);
	return celsius;
 	}