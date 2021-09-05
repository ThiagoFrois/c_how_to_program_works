// Created by Thiago Henrique Frois Menon Cunha
// On the date 04/09/2021

#include<stdio.h>

// This code prints on the screen the all possible comparing between two integers.
int main(){
    int number1, number2;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    printf("The relationship that the two numbers satisfy is:\n");

    if(number1 == number2)
        printf("%d equals %d.\n", number1, number2);
    if(number1 != number2)
        printf("%d is different from %d.\n", number1, number2);
    if(number1 < number2)
        printf("%d é smaller than %d.\n", number1, number2);
    if(number1 > number2)
        printf("%d is greater than %d.\n", number1, number2);
    if(number1 <= number2)
        printf("%d is less than or equal to %d\n.", number1, number2);
    if(number1 >= number2)
        printf("%d is greater than or equal to %d.\n", number1, number2);

    return 0;
}
