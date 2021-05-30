#include <stdio.h>

int main(int argc, char const *argv[])
{
	float fahr, celsius;
	int lower_bound, upper_bound, step;
	step = 20;
	lower_bound = 0;
	upper_bound = 300;

	for (fahr = upper_bound; fahr >= lower_bound; fahr -= step)
		printf("%3.0f°F\t %6.1f°C \n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
