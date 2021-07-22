#include <stdio.h>
#include <math.h>

int main(void){
    long number;

    printf("Enter a number: ");
    scanf("%ld", &number);

    while(number % 2 == 0){
        printf("2 ");
        number = number / 2;
    }
    for (int i = 3; i <= sqrt(number); i = i + 2){
        while(number % i == 0){
            printf("%d ", i);
            number = number / i;
        }
    }
    if(number > 2){
        printf("%ld \n", number);
    }
    return 0;
}