/* Description: This code generates a 7 segment display
* for a number inputted by the user
*/ 
/* Version 10.07.21 && 11.07.21 */
/* by ~giftcup */

#include <stdio.h> 
#include <stdbool.h>

void display(bool[]); //to display each line;

int main(void) {
    bool segment[7];
    int decimal;
    
    printf("Enter an integer between 0 and 9: ");
    scanf("%d", &decimal);
    
    if(decimal < 0 || decimal > 9){
        printf("Sorry, you didn't follow the instructions\n");
        printf("The program has ended!\n");
        return 1;
    }

    for(int i = 0; i < 7; i++) {
        segment[i] = true;
    }

    switch (decimal)
    {
    case 0:
        segment[6] = false;
        break;
    case 1:
        segment[0] = false;
        segment[3] = false;
        segment[4] = false;
        segment[5] = false;
        segment[6] = false;
        break;
    case 2:
        segment[2] = false;
        segment[5] = false;
        break;
    case 3:
        segment[4] = false;
        segment[5] = false;
        break;
    case 4:
        segment[0] = false;
        segment[3] = false;
        segment[4] = false;
        break;
    case 5:
        segment[1] = false;
        segment[4] = false;
        break;
    case 6:
        segment[1] = false;
        break;
    case 7:
        segment[3] = false;
        segment[4] = false;
        segment[6] = false;
        break;

    case 9:
        segment[4] = false;
        break;
    default:
        printf("You inputted a wrong value\n");
        break;
    }
    

    display(segment);
    return 0;
    
}

void display(bool s[7]) {
    printf("\n");
        if(s[0] == true) {
            printf("#########");
        }
    for(int i = 0; i < 4; i++){
        if(s[1] == true && s[5] == true) {
            printf("%c%9c\n", '#', '#');
            continue;
        } 
        else if(s[1] == true){
            printf("%10c\n", '#');
            continue;
        }
        else if(s[5] == true){
            printf("#         \n");
            continue;
        }
    } 
    
    if(s[6] == true) {
        printf("#########");
    }
    for(int i = 0; i < 4; i++){
        if(s[2] == true && s[4] == true) {
            printf("%c%9c\n", '#', '#');
            continue;
        } 
        else if(s[2] == true){
            printf("%10c\n", '#');
            continue;
        }
        else if(s[4] == true){
            printf("#         \n");
            continue;
        }
    } 
    if(s[3] == true) {
        printf("#########\n");
    }

}