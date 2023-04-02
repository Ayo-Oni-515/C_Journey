#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	unsigned long long *power = (unsigned long long *) malloc(sizeof(unsigned long long) * 5);
	int i;
	*power = 1;

	for (i = 0; i < 51; i++)
	{
		printf("2 to the power of %d is %llu.\n", i, *power);
		*power *= 2;
	}
	free(power);
	return (0);
}

