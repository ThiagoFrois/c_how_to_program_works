// Created by Thiago Henrique Frois Menon Cunha
// On the date 04/09/2021

#include<stdio.h>

// This code prints on the screen the digits of a given number.
int main(){
    int number, d1, d2, d3, d4, d5;

    printf("Enter the number of five digits: ");
    scanf("%d", &number);

    d1 = number / 10000;
    number = number % 10000;
    d2  = number / 1000;
    number = number % 1000;
    d3 = number / 100;
    number = number % 100;
    d4 = number / 10;
    d5 = number % 10;

    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);

    return 0;
}
