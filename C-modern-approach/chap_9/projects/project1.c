#include <stdio.h>
#include <assert.h>

//void test(void);
void selection_sort(int elements[], int number_of_elements);
void swap(int* max_num, int* unsorted_end);

int main(void)
{
    int number_of_elements;
    //test();

    printf("Enter number of elements: ");
    scanf("%d", &number_of_elements);

    int elements[number_of_elements];

    printf("Enter %d elements: ", number_of_elements);
    for (int i = 0; i < number_of_elements; i++)
    {
        scanf("%d", &elements[i]);
    }
    selection_sort(elements, number_of_elements);

    for (int i = 0; i < number_of_elements; i++)
        printf("%d ", elements[i]);
    printf("\n");
}

/*
    selection_sort: Takes an unsorted array and its length.
                    Sorts the array in ascending order and returns
                    when the length is less than or equal to zero.
*/

void selection_sort(int a[], int n)
{
    if (n - 1 <= 0) return;

    int i, max, max_index = 0;
    max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
    swap(&a[max_index], &a[n-1]);
    selection_sort(a, n-1);
}

/*
    swap: takes the maximum number in the unsorted part of the
          array and the number at the end of the unsorted part
          and swaps them.
          returns void.
*/
void swap(int* max, int* end)
{
    int tempo = *end;
    *end = *max;
    *max = tempo;
}

/*void test(void)
{
    int arr1[7] = {6, 5, 23, 9, 8, 6, 10};
    int sorted1[7] = {5, 6, 6, 8, 9, 10, 23};
    assert(selection_sort(arr1, 7) == sorted1);
}
*/