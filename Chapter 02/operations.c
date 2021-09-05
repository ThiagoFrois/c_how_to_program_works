// Created by Thiago Henrique Frois Menon Cunha
// On the date 04/09/2021

#include<stdio.h>

// This code prints on the screen the result of operations with two given numbers.
int main(){
    int number1, number2;

    printf("Enter two number: ");
    scanf("%d %d", &number1, &number2);

    printf("The sum is %d.\n", number1 + number2);
    printf("The difference is %d.\n", number1 - number2);
    printf("The product is %d.\n", number1 * number2);
    printf("The quotient is %d.\n", number1 / number2);
    printf("The rest is %d.\n", number1 % number2);

    return 0;
}
