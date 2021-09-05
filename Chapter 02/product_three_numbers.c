// Created by Thiago Henrique Frois Menon Cunha
// On the date 04/09/2021

#include<stdio.h>

// This code prints on the screen the calculation of product of three given numbers.
int main(){
    int number1, number2, number3, product;

    printf("Enter the numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    product = number1 * number2 * number3;
    printf("The product is %d.\n", product);

    return 0;
}
