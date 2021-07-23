/** Description: Indexing an array that has beem 
 * created using dynamic memory allocation
 */
/* Version 17.07.2021 */
/*by giftcup*/
#include <stdio.h>
#include <stdlib.h>
#include "index.h"

int main(void) {
    int number_of_students;
    int* marks;
    char gender;
    int sum;
  
    printf("Enter the number of students: \n");
    scanf("%d", &number_of_students);
    marks = allocate(number_of_students);
    gender = inputs(marks, number_of_students);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}