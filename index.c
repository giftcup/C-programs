/** Description: Indexing an array that has beem 
 * created using dynamic memory allocation
 */
/* Version 17.07.2021 */
/*by giftcup*/
#include <stdio.h>

int main(void) {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int* marks = allocate(number_of_students);
    gender = inputs(marks, number_of_students);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}