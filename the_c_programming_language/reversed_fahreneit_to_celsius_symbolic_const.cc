#include <stdio.h>

#define LOWER_BOUND 0
#define UPPER_BOUND 300
#define STEP 20

int main(int argc, char const *argv[])
{
	float fahr, celsius;

	for (fahr = UPPER_BOUND; fahr >= LOWER_BOUND; fahr -= STEP)
		printf("%3.0f°F\t %6.1f°C \n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
