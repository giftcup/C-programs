/* Description: Determines if a number is an armstrong number.
** Source: random exercise
** By: ~giftcup
** version: 07.08.2021
*/

#include <math.h>
#include <stdio.h>

double pow(double x, double y);

int main (void)
{
	int number;
	printf ("Enter a number: ");
	scanf ("%d", &number);
	
	int length_of_num = 0;
	int temp = number;
	while (temp > 0)
	{
		temp = temp / 10;
		length_of_num++;
	}
	
	temp = number;
	float sum = 0;
	while (number > 0)
	{	
		int index = number % 10;
		sum += pow (index, length_of_num);
		number = number / 10;
	}
	
	number = temp;
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