#include <stdio.h>
#define MAX_NUM 1000

int main(void){
	int sum = 0;
	int i;
	for(i = 0; i < MAX_NUM; i++){
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("The sum of all the multiples of 3 and 5 below %d is %d\n", MAX_NUM, sum);
	
	return 0;
}