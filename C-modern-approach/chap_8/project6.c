/* Translates a message into B1FF-speak */

#include <stdio.h>
#include <ctype.h>

#define SIZE 50


int get_message(char* message);
void translate(char message[], int length);

int main(void)
{
    char message[50];
    int length;

    length = get_message(message);
    translate(message, length);

    return 0;
}

int get_message(char* message)
{
    char ch;
    int i = 0;

    printf("Enter message: ");
    
    while ((ch = getchar()) != '\n' && i < SIZE)
    {
        message[i++] = toupper(ch);
    }
    //i--;
    return i;
}

void translate(char message[], int length)
{
    int i = 0;

    printf("In B1FF-speak: ");
    while (i < length)
    {
        switch (message[i])
        {
            case 'A':
                message[i] = '4';
                break;
            case 'B':
                message[i] = '8';
                break;
            case 'E':
                message[i] = '3';
                break;
            case 'I':
                message[i] = '1';
                break;
            case 'O':
                message[i] = '0';
                break;
            case 'S':
                message[i] = '5';
                break;
        }
        putchar(message[i++]);
    }
    
    printf("!!!!!!!!\n");
        
}