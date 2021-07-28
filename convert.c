/* Description: Converts a number from base 10 to a given base entered by the user.
** version 28.07.2021
** by ~giftcup
*/

#include <stdio.h>

int main(void){
    int base, number;

    printf("Enter the base you'll like the number to be converted to: ");
    scanf("%d", &base);
    printf("Enter the number youll like to convert: ");
    scanf("%d", &number);
    int temp = number;

    //forming the reversed base number
    int basenumber = 0, tens = 1, count = 0, place = 0;
    while(number != 0){
        basenumber = number % base;
        number = number / base;
        if (count != 0){
            tens = tens * 10;
            place = (place * 10) + basenumber;
        }
        else{
            place = basenumber;
        }
        count ++;
    }
    printf("%d %d\n", tens, count);

    //reversing the number
    basenumber = 0;
    while(tens != 0){
        basenumber += (place % 10) * tens;
        place /= 10;
        tens /= 10;
    }
    
    printf("The number %d in base %d is %d\n", temp, base, basenumber);
}