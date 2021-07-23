#include <stdio.h>

int main(void) {
	char operator;
	double num1, num2, result;

	printf("Choose one of the following operations to be performed on the numbers + - * / : \n");
	scanf("%c", &operator);
	printf("Enter two numbers you'll like to Add, Subtract, Multiply or Divide: \n");
	scanf("%lf %lf", &num1, &num2);

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
			result = num1 / num2;
			break;
		default:
			printf("You entered an invalid operation!\n");
			return 1;
	}
	printf("The result of %.2lf %c %.2lf is %.2lf\n", num1, operator, num2, result);
	return 0;
	
}