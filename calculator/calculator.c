/* A calculator that performs simple arithmetic operations on two numbers*/

#include <stdio.h>

int main(void) {
	char operator;
	double num1, num2, result;

	printf("Enter two numbers you'll like to Add, Subtract, Multiply or Divide: \n");
	scanf("%lf %lf", &num1, &num2);

	printf("Choose one of the following operations to be performed on the numbers + - * / : \n");
	scanf(" %c", &operator);

	switch(operator) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if(num2 != 0)
				result = num1 / num2;
			else
				printf("Division by zero is invalid\n");
				return 0;
			break;
		default:
			printf("You entered an invalid operation!\n");
			return 0;
	}
	printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
	return 0;
	
}