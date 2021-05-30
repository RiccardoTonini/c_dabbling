#include <stdio.h>

int main(int argc, char const *argv[])
{
	float celsius, fahr;
	int lower_bound, upper_bound, step;

	lower_bound = 0;
	upper_bound = 300;
	step = 20;

	printf("Celsius to Fahreneit Conversion Table \n");

	while(fahr <= upper_bound) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf(" %6.1f°C \t %3.0f°F \n", celsius, fahr);
		fahr += step;
	}

}
