/** Description: Indexing an array that has beem 
 * created using dynamic memory allocation
 */
/* Version 17.07.2021 */
/*by giftcup*/
#include <stdio.h>

int marks_summation(int* marks, int number_of_students, char gender);

int main(void) {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}

int marks_summation(int* marks, int number_of_students, char gender) {
  
  int i;
  int sum = 0;
  
  if (gender == 'b'){
      i = 0;
      while(i < number_of_students){
          sum = sum + *(marks + i);
          i = i + 2;
      }
  }
  else if (gender == 'g'){
      i = 1;
      while(i < number_of_students){
          sum = sum + *(marks + i);
          i = i + 2;
      }
  }
  return sum;
}