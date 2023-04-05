#include <stdio.h>
#include <string.h>

int main(void)
{
	char var[8] = "ayodeji";

	for (int i = 0; var[i] != '\0'; i++)
	{
		if (var[i] == 'a')
		{
			continue;
		}
		else if (var[i] == 'e')
		{
			continue;
		}
		else if (var[i] == 'i')
		{
			continue;
		}
		else if (var[i] == 'o')
		{
			continue;
		}
		else if (var[i] == 'u')
		{
			continue;
		}
		printf("%c\n", var[i]);
	}
	printf("\n");
}
