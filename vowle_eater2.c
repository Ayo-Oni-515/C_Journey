#include <stdio.h>
#include <string.h>

int main(void)
{
	char *user_word;

	scanf("%s", user_word);
	strupr(user_word);

	for (int i = 0; user_word[i] != '\0'; i++)
	{


