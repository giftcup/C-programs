/* Description: A code that will take an integer
* and return the binary equivalent
*/
/* Version 09. 07. 21 */
/* by ~giftcup */

#include <stdio.h>
#include "binary.h"

int main(void)
{
	int decimal;
	int placeholder;
	int binary;
    
	scanf("%d", &decimal);
	int tens = 1;
    placeholder = forming(decimal, &tens);
	
	binary = reverse(placeholder, tens);
    printf("%d\n", binary);
}