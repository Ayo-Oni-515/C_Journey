#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[30] = "chupacabara";
	char test_word[30];

	printf("Enter a word: ");
	scanf("%s", test_word);
	while (strcmp(test_word, word))
	{
		if (test_word == word)
		{
			break;
		}
		printf("Enter a word: ");
		scanf("%s", test_word);
	}
	printf("You've successfully left the loop\n");
	return (0);
}

	
