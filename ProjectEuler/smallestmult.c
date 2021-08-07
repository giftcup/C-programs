
#include <stdio.h>
#include <stdbool.h>

int main(void){
    int number = 10;
    bool check = false;

    while(check == false){
        for(int i = 1; i <= 10; i++){
            while(number % i != 0){
                number = number * 10;
            }
        }
    }
    printf("%d ", number);
    
}