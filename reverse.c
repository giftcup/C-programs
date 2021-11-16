#include <stdio.h>
#include <stdlib.h>

int *reverse_array(int size, int *arr);

int main()
{
    int num, *arr, i;
    printf("Enter size of array: ");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    printf("Enter elements in array: ");
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int *reversed_array = (int*)malloc(sizeof(int) * num);
    reversed_array = reverse_array(num, arr);
    printf("The reversed arr is: ");
    for(i = 0; i < num; i++)
        printf("%d ", *(reversed_array + i));
    putchar('\n');
    return 0;
}

int *reverse_array(int size, int *arr)
{
    for (int i = 0, j = size - 1; i < size/2 && j >= 0; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return arr;
}
