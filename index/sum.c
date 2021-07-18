// Sums marks according to the gender.
// Boys have their marks on even numbered indices
// while girls on odd numbered indices
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