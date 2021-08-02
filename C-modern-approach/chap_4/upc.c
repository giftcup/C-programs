/* Description: Program checks if the universal product code for a particular product is consistent
** source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void){
    int type, m1, m2, m3, m4, m5, p1, p2, p3, p4, p5, check; // m: manufacture and p: product
    int first_sum, second_sum;

    printf("Enter the first (single) digit: ");
    scanf("%d", &type);
    printf("Enter first group of five digits: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    printf("Enter second group of five digits: ");
    scanf("%d%d%d%d%d", &p1, &p2, &p3, &p4, &p5);
    printf("Enter the check digit: ");
    scanf("%d", &check);

    first_sum = type + m2 + m4 + p1 + p3 + p5;
    second_sum = m1 + m3 + m5 + p2 + p4;

    int total = 3 * first_sum + second_sum;
    int check_digit = 9 - ((total - 1) % 10);

    if (check_digit == check)
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;
}