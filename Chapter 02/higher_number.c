// Created by Thiago Henrique Frois Menon Cunha
// On the date 04/09/2021

#include<stdio.h>

// This code prints the largest number between two given integers on the screen.
int main(){
    int number1, number2;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    if(number1 == number2)
        printf("%d equal %d.\n", number1, number2);
    if(number1 < number2)
        printf("%d is smaller than %d.\n", number1, number2);
    if(number1 > number2)
        printf("%d is greater than %d.\n", number1, number2);
    return 0;
}
