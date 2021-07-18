char inputs(int* marks, int number_of_students){
    char gender;
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    return gender;
}