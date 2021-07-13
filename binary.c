/* Description: A code that will take an integer
* and return the binary equivalent
*/
/* Version 09. 07. 21 */
/* by ~giftcup */

#include <stdio.h>

int main(void)
{
    int decimal;
    int binary = 0;
    int placeholder = 0;
    int count = 0;
    
    scanf("%d", &decimal);
    
    int tens = 1;
    while(decimal != 0) {
        binary = decimal % 2;
        decimal /= 2;
        if(count != 0){
            tens *= 10;
            placeholder = (placeholder * 10) + binary;
        }
        else
            placeholder = binary;
        count ++;
    }
    binary = 0;
    while(tens != 0) 
    {
        
        binary += (placeholder % 10) * tens;
        placeholder /= 10;
        tens = tens / 10;
    }

    printf("%d\n", binary);
}