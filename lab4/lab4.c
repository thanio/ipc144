/***************************************************************** 

    File: lab4.c

    Author: [Your Name]
    Seneca email: [Your Seneca email address]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab4.c lab4main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "lab4.h"

int readIntInRange(int min, int max)
{
    int num;
    do {
        printf("\n\nPlease enter an integer between %d and %d inclusive: ", min, max);
        scanf("%d", &num);
        if (num < min || num > max) {
            printf("The input was not between %d and %d\n\n", min, max);
        }
    } while (num < min || num > max); {
        
    }
    return num;
}

int getMenuChoice(void)
{
    int choice;
    printf("\nIPC Calculator\n");
    printf("\t1) Calculate 2^n\n");
    printf("\t2) Calculate n!\n");
    printf("\t3) Calculate the nth Fibonnaci number\n");
    printf("\t0) Exit\n");
    printf("Please enter your choice: \n");

    do{
        scanf("%d", &choice);
        if (choice < 0 || choice > 4) {
            printf("%d was not a valid input, please try again\n", choice);
        }
    } while (choice < 0 || choice > 4); {
        
    }
    return choice;
}

int twoToPowerOfN(int n)
{
    int i;
    int p = 1;

    for (i = 0; i < n; i++) {
        p *= 2;

    }
    return p;
}
int factorial(int n)
{
    int i;
    int p = 1;
    for (i = n; i > 0; i--) {
        p *= i;
    }
    return p;
}

int fibonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 0;

    int a = 0;
    int b = 1;
    int c;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        
    }
    return b;

}
