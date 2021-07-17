/* Description: A code that will take an reversed
* binary number and return the binary equivalent
*/
/* Version 17. 07. 21 */
/* by ~giftcup */

int reverse(int placeholder, int tens){
	int binary = 0;
	while(tens != 0) {
		binary += (placeholder % 10) * tens;
		placeholder /= 10;
		tens = tens / 10;
	}
	return binary;
}