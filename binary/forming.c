/* Description: A code that will take an integer
* and return the reversed binary equivalent
*/
/* Version 17. 07. 21 */
/* by ~giftcup */

int count = 0;
int placeholder = 0;
int binary = 0;

while(decimal != 0) {
        binary = decimal % 2;
        decimal /= 2;
        if(count != 0) {
            *tens *= 10;
            placeholder = (placeholder * 10) + binary;
        }
        else {
            placeholder = binary;
	}
        count ++;
}

return placeholder;
