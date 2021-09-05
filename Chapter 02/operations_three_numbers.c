// Created by Thiago Henrique Frois Menon Cunha
// On the date 04/09/2021

#include<stdio.h>

// This code prints on the screen...
int main(){
    int number1, number2, number3, smaller, bigger;

    printf("Enter the three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    printf("The sum is %d.\n", number1 + number2 + number3);
    printf("The average is %d.\n", (number1 + number2 + number3) / 3);
    printf("The product is %d.\n", number1 * number2 * number3);

    smaller = number1;

    if(number2 < smaller)
        smaller = number2;
    if(number3 < smaller)
        smaller = number3;

    printf("The smaller is %d.\n", smaller);

    bigger = number1;

    if(number2 > bigger)
        bigger = number2;
    if(number3 > bigger)
        bigger = number3;

    printf("The bigger is %d.\n", bigger);

    return 0;
}
