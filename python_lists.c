#include <stdio.h>

struct LIST{
	int siz;
	char *list;
} var[3];

int main(void)
{
	var[3] = {{6, "mango"}, {10, "pineapple"}, {11, "Watermelon"}};

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%s", var[i].list[1]);
	}
	return (0);
}
