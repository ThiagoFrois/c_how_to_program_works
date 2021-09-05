// Created by Thiago Henrique Frois Menon Cunha
// On the date 04/09/2021

#include<stdio.h>

// This code prints on the screen given two number if the second is multiple of first.
int main(){
    int number1, number2;

    printf("Enter the two numbers: ");
    scanf("%d %d", &number1, &number2);

    if(number2 % number1 == 0)
        printf("%d is a multiple of %d.\n", number2, number1);
    if(number2 % number1 > 0)
        printf("%d is not a multiple of %d.\n", number2, number1);

    return 0;
}
