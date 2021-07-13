/** Converts a given integer between 0 and 9
** into a seven segment display. Modified code
**/
/* Version 11.07.21 */
/* by ~giftcup */

#include <stdio.h>
#include <stdbool.h>

void display(bool []); //displays the seven segment number
int reverse_number(int); //reverses the number inputted
void get_digit(int); // converts each digit of a number to binary
void produce_segment(bool, bool, bool, bool); //converts the number into a seven segment display number


int main(void) {
    int number;

    printf("Enter an integer between 0 and 9: ");
    scanf("%d", &number);
    int reverse = reverse_number(number);
    get_digit(reverse);
return 0;
}

int reverse_number(int number){
    int tempo = number;
    int tens =  1;
    int count = 0;
    while (tempo != 0)
    {
        if(count != 0)
            tens *= 10;
        tempo /= 10;
        count ++;
    }

    int reversednum = 0;
    while (tens != 0){
        reversednum  += (number % 10) * tens;
        number /= 10;
        tens /= 10;
    }
    return reversednum;
}

void get_digit(int num){
    int patch;
    bool P,Q,R,S;
    while(num != 0){
        patch = num % 10;
        //Converts the integer read into a 4-bit binary number;
        P = patch & 0b1000;
        Q = patch & 0b0100;
        R = patch & 0b0010;
        S = patch & 0b0001;
        produce_segment(P, Q, R, S);
        printf("\n");
        num /= 10;
    }
}

void produce_segment(bool P, bool Q, bool R, bool S){
    bool segment[7]; //represents the different segments on the display;
    segment[0] = P | R | (Q & S) | (!Q & !S);
    segment[1] = P | !Q | (R & S) | (!R & !S);
    segment[2] = !R | S | Q;
    segment[3] = (!Q & (P | R | !S)) | (R & !S) | (Q & !R & S);
    segment[4] = (R & !S) | (!Q & !S);
    segment[5] = P | Q | (!R & !S);
    segment[6] = P | (R & !S) | (Q & !R) | (!Q & R);

    display(segment);

}

void display(bool s[7]) {
    int display[11][5] = {
        0,s[0],s[0],s[0],0,
        s[5],0, 0, 0,s[1],
        s[5],0, 0, 0,s[1],
        s[5],0, 0, 0,s[1],
        s[5],0, 0, 0,s[1],
        0,s[6],s[6],s[6],0,
        s[4],0, 0, 0,s[2],
        s[4],0, 0, 0,s[2],
        s[4],0, 0, 0,s[2],
        s[4],0, 0, 0,s[2],
        0,s[3],s[3],s[3],0,
    };

    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 5; j++){
            if(display[i][j] == 0){
                printf(" ");
            }
            else {
                printf("#");
            }
        }
        printf("\n");
    }
}
