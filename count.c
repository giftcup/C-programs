/* Description: Counting the number of characters
 *in a given string
*/
/* Version 09. 07. 21 */
/* by ~giftcup */

#include <stdio.h>
#include <string.h>

int main(void) {
    int c;
    int count = 0;

   /* while((c = getchar()) != EOF)
    {   
        //Does not increment if a new character is read
        if(c != '\n')
            count++;
    }
    printf("The number of characters is %d\n", count);
*/
    //OR
    char string[100];
    fgets(string, sizeof(string), stdin);
    printf("Number of characters: %lu\n", strlen(string) - 1);

    return 0;
}