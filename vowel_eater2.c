#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *_toupper(char *var)
{
	int i;
	int lower;

	for (i = 0; var[i] != '\0'; i++)
	{
		lower = (var[i] >= 97 && var[i] <= 122);
		if (lower)
		{
			var[i] -= 32;
		}
	}
	return (var);
}		

int main(void)
{
	char *user_word;
	user_word = (char *) malloc(sizeof(char) * 50);

	printf("Enter a word: ");
	scanf("%s", user_word);
	_toupper(user_word);
	for (int i = 0; user_word[i] != '\0'; i++)
	{
		if (user_word[i] == 'A')
		{
			continue;
		}
		else if (user_word[i] == 'E')
		{
			continue;
		}
		else if (user_word[i] == 'I')
		{
			continue;
		}
		else if (user_word[i] == 'O')
		{
			continue;
		}
		else if (user_word[i] == 'U')
		{
			continue;
		}
		printf("%c\n", user_word[i]);
	}
	printf("\n");
	free(user_word);
	return (0);
}
