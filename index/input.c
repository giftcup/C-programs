#include <stdio.h>

char inputs(int* marks, int number_of_students){
    char gender;
    printf("Enter the marks: \n");
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    printf("Enter the gender whose total marks you want to calculate. ");
    printf("b for Boys and g for Girls: \n");
    scanf(" %c", &gender);
    return gender;
}