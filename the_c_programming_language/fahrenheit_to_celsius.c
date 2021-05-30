#include <stdio.h>


int main(int argc, char const *argv[])
{
	float fahr, celsius;
	int lower_bound, upper_bound, step;

	lower_bound = 0;
	upper_bound = 300;
	step = 20;

	fahr = lower_bound;

	printf("Fahreneit to Celsius Conversion Table \n");

	while (fahr <= upper_bound) {
		// celsius = 5 * (fahr - 32) / 9;
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		// %3d Augment each %d with a width of 3 so that numbers
		// will be printed right-justified in their fields
		printf("%3.0f°F\t %6.1f°C\n", fahr, celsius);
		fahr = fahr + step;
	}

}
