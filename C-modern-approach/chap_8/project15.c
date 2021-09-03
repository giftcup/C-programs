/* Generates the Caesar cipher for some text */

#include <stdio.h>

#define N 80

int main(void)
{
    char message[N], ch;
    int shift, i;
    
    i = 0;
    
    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n' && i < N)
        message[i++] = ch;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    for (int j = 0; j < i; j++)
    {
        if (message[j] >= 'A' && message[j] <= 'Z')
            message[j] = ((message[j] - 'A') + shift) % 26 + 'A';
        else if (message[j] >= 'a' && message[j] <= 'z')
            message[j] = ((message[j] - 'a') + shift) % 26 + 'a';
    }

    printf("Encrypted message: ");
    for (int j = 0; j < i; j++)
        printf("%c", message[j]);
    printf("\n");

    return 0;
}