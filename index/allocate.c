int* allocate(int number_of_students){
    int *marks = (int *) malloc(number_of_students * sizeof (int));
    return marks;
}