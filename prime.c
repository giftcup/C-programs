/* Description: The program determines if a given
** number is prime
*/
/* version 21.07.2021 */
/* by ~giftcup */

#include <stdio.h>
#include <stdbool.h>

int main(void){
    int number;
    bool prime = true;
    int i;

    printf("Enter any number: ");
    scanf("%d", &number);

    for(i = 0; i < number/2; i++) {
        if(number%i == 0){
            prime = false;
            break;
        }
    }
    if(prime == true){
        printf("%d is a prime number\n", number);
    }
    else{
        printf("%d is not a prime number\n", number);
    }

    return 0;
}