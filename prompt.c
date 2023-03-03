#include <stdio.h>
int main(void)
{
	char fname[30];
	char lname[30];
	
	printf("May I have your first name, please? ");
	scanf("%s", fname);	
	printf("May I have your last name, please? ");
	scanf("%s", lname);

	printf("Your name is %s %s.\n", fname, lname);
	return (0);
}
