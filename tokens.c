/* Description: Prints each word of a
 * sentence on a new line and uses 
 * dynamic memory allocation to get the
 * sentence.
 * version: 23.01.2021
 * by ~giftcup
 */
 
#include <stdio.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    //Getting the tokens
    int i = 0;
    while(*(s + i) != '\0'){
        if(*(s + i) == ' '){
            printf("\n");
        }else{
            printf("%c", *(s+i));
        }
        i++;
    }
    return 0;
}