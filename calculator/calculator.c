/* A calculator that performs simple arithmetic operations on two numbers*/

#include <stdio.h>
#include <stdlib.h>

/* prototypes */
void hello(void);
void usage(void);
void get_operation(int* operation);
void exit_program(int operation);
void get_numbers(double* x, double* y);
void result(int op, double x, double y);

int main(void) {
	int operation;
	double x, y;

	hello();
	for(;;)
	{
		usage();
		get_operation(&operation);
		exit_program(operation);
		get_numbers(&x, &y);
		result(operation, x, y);
	}
}

 /*************************************************
 * hello: Basic greeting to the user.             *
 *************************************************/
void hello(void)
{
	printf("- - - - - - - - - - - - - - - "
	       "- - - - - - - - - - - - -\n");
	printf("\n\nHello, I'm here to make your life better :)\n\n");
}


/***************************************************
 * usage: Shows the user what operations are valid *
 **************************************************/
void usage(void)
{
	printf("1. Addition\n"
			"2. Subtraction\n"
			"3. Multiplication\n"
			"4. Division\n"
			"5. Exit\n");
	return;
}

/***************************************************
 * get_operation: Gets the operation the user wants*
 * 				  to perform                       *
 **************************************************/
void get_operation(int* operation)
{
	printf("Enter your choice(1-5): ");
	scanf("%d", operation);
}

/***************************************************
 * exit_program: Ends the program when the user    *
 * 				 inputs 5 as an option             *
 **************************************************/
void exit_program(int operation)
{
	if(operation == 5)
		exit(EXIT_SUCCESS);
}
/***************************************************
 * get_numbers: Gets two numbers from the user     *
 **************************************************/
void get_numbers(double* x, double* y)
{
	printf("Enter any two numbers: ");
	scanf("%lf %lf", x, y);
}

/***************************************************
 * result: Performs the calculation and prints 	   *
 * out the result                                  *
 **************************************************/
void result(int op, double x, double y)
{
	double result;
	switch(op) {
		case 1:
			result = x + y;
			break;
		case 2:
			result = x - y;
			break;
		case 3:
			result = x * y;
			break;
		case 4:
			if(y != 0)
				result = x / y;
			else
				printf("Division by zero is invalid\n");
				return;
			break;
		default:
			printf("You entered an invalid operation!\n");
			return;
	}
		printf("Result = %.2lf\n", result);
		printf("- - - - - - - - - - - - - - - - -" 
		        "- - - - - - - - - - - - - - \n\n");

}