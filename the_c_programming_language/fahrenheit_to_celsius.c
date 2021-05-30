#include <stdio.h>


int main(int argc, char const *argv[])
{
	int fahr, celsius;
	int lower_bound, upper_bound, step;

	lower_bound = 0;
	upper_bound = 300;
	step = 20;

	fahr = lower_bound;

	while (fahr <= upper_bound) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d°F\t %6d°C\n", fahr, celsius);
		fahr = fahr + step;
	}

}
