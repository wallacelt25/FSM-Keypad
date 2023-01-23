#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "mylib/mylib.h"

void idle() {
    printf(" _____________________ \n");
    printf("|                     |\n");
    printf("|  1   2   3   ______ |\n");
    printf("|             |      ||\n");
    printf("|  4   5   6  |      ||\n");
    printf("|             |______||\n");
    printf("|  7   8   9          |\n");
    printf("|_____________________|\n");
    printf("  Idle   \n");
}

void input() {
    printf(" _____________________ \n");
    printf("|                     |\n");
    printf("|  1   2   3   ______ |\n");
    printf("|             |      ||\n");
    printf("|  4   5   6  |123456||\n");
    printf("|             |______||\n");
    printf("|  7   8   9          |\n");
    printf("|_____________________|\n");
    printf("  inputting   \n");
}

void accept() {
    printf(" _____________________ \n");
    printf("|                     |\n");
    printf("|  1   2   3   ______ |\n");
    printf("|             |      ||\n");
    printf("|  4   5   6  |Accept||\n");
    printf("|             |______||\n");
    printf("|  7   8   9          |\n");
    printf("|_____________________|\n");
    printf("  Accepted   \n");
}

int main(void) {
    int s0 = 0, s1 = 0, L, A, O = 0;
    while (true) {
        printf("\033[2J");
        printf("\033[1;1H");
        if (s0 == 0 && s1 == 0) {
            idle();
        } else if ( s0 == 0 && s1 ==  1){
            input();
        } else if ( s0 == 1 && s1 ==  0){
            accept();
        } 
        printf("Enter input (1 to start inputting // 0 to stop inputting): ");
        scanf("%d", &L);
        printf("Enter input (0 to reject the keys // 1 to accept the keys): ");
        scanf("%d", &A);


        if (L == 0 || L == 1 && A == 0 || A == 1) {
            states(s0, s1, L, A, &s0, &s1, &O);
        } else {
            printf("Please enter a proper input (0 or 1)\n");
        }
    }
    return 0;
}
