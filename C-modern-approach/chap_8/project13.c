/* 
** Takes first name and last name from user and displays 
** `first_name_initial, last_name`
*/

#include <stdio.h>

#define N 20

int main(void)
{
    char first, ch;
    char last_name[N];
    int i;

    printf("Enter a first and last name: ");
    
    first = getchar();

    while ((ch = getchar()) != ' ')
        ch = ' ';

    i = 0;
    while ((ch = getchar()) != '\n' && i < N)
    {
        if (ch != ' ')
        {
            last_name[i++] = ch;
        }
    }
    
    printf("You entered the name: ");
    for (int j = 0; j < i; j++)
        printf("%c", last_name[j]);
    printf(", %c\n", first);

    return 0;
}