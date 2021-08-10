/* Description: Determines if a number is an armstrong number.
** Source: random exercise
** By: ~giftcup
** version: 07.08.2021
*/

#include <stdio.h>
#include <math.h>

int main (void)
{
	int number;
	printf ("Enter a number: ");
	scanf ("%d", &number);
	
	// Getting the length of the number.
	int length_of_num = (number < 0) ? 0 : (log10(number)) + 1;
	
	// Raising each digit of the number to the length_of_num
	int sum = 0;
	for (int i = number; i > 0; i /= 10)
	{	
		int index = i % 10;
		index = pow (index, length_of_num);
		sum += index;
	}
	
	if (number == sum)
	{
		printf("Number is an armstrong number\n");
	}
	else
	{
		printf("Number is not an armstrong number\n");
	}
	
	return 0;
}