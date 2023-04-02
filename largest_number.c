#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Store the current largest number here
	int largest_number = -99999;
	int *number;
	
	number = (int *)malloc(sizeof(int));
	/*Input the first value*/
	printf("Enter a number or type -1 to stop: \n");
	scanf("%d", number);
	/*If the first number is not equal to -1, continue.*/ 
	while (*number != -1)
	{
		/*Is number larger than larget_number*/
		if (*number > largest_number){
			/*Yes, update largest_number*/
			largest_number = *number;
		}
		/*Input the next number*/
		printf("Enter a number or type -1 to stop: \n");
		scanf("%d", number);
	}
	/*print the largest number*/
	printf("The largest number is: %d\n", largest_number);
	free(number);
	return (0);
}
