#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: 1.
 */ 
int main(void)
{
	int hour, minute;

	printf("Starting time (hours): ");
	scanf("%d", &hour);
	while (hour >= 24)
	{
		printf("ENTER CORRECT VALUE\n");
		printf("Starting time (hours): ");
		scanf("%d", &hour);
	}
	printf("Starting time (minutes): ");
	scanf("%d", &minute);
	while (minute > 60)
	{
		printf("ENTER CORRECT VALUE\n");
		printf("Starting time (minutes): ");
		scanf("%d", &minute);
	}
	return (1);

}
