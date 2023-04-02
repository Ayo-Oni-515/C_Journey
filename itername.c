#include <stdio.h>

int main(void)
{
	char *name = "ayodeji";
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		printf("%c\n", name[i]);
	}
	return (0);
}
