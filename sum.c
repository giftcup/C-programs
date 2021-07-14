#include <stdio.h>


int 
main(void) {
	
	int number;
	printf("Enter any positive integer: ");
    	scanf("%d", &number);
    
   	int sum = 0;
    	while (number != 0)
    	{
        	sum += (number % 10);
        	number /= 10;
    	}
    	printf("%d\n", sum);

    	return 0;
}