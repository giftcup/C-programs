/* Description: A grading system using switch statements.
** Source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    printf("Letter date: ");
    switch (grade)
    {
        case 90 ... 100:
            printf("A\n");
            break;
        case 80 ... 89:
            printf("B\n");
            break;
        case 70 ... 79:
            printf("C\n");
            break;
        case 60 ... 69:
            printf("D\n");
            break;
        case 0 ... 59:
            printf("F\n");
            break;
        default:
            printf("Invalid\n");
    }

    return 0;
}