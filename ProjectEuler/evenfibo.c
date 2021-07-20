#include <stdio.h>
#define MAX_NUM 4000000

int main(void){
    unsigned long evensum = 0;
    unsigned long series[3];
    int i = 0;
    series[0] = 0;
    series[1] = 1;
    while((series[2] = series[0] + series[1]) < MAX_NUM){
        if(series[2] % 2 == 0){
            evensum += series[2];
        }
        series[0] = series[1];
        series[1] = series[2];
        if(series[2] < MAX_NUM){
            printf("%lu ", series[2]);
        }
    }
    printf("\n");
    printf("The sum of all the even terms in the fibonnacci series that doesn't exceed %d is %lu\n", MAX_NUM, evensum);
}