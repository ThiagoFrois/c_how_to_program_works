// Created by Thiago Henrique Frois Menon Cunha
// On the date 04/09/2021

#include<stdio.h>

// This code prints on the screen the sum of two given integers.
int main(){
    int integer1, integer2, sum;

    printf("Enter the first integer: ");
    scanf("%d", &integer1);
    printf("Enter the second integer: ");
    scanf("%d", &integer2);

    sum = integer1 + integer2;
    printf("The sum is %d.\n", sum);

    return 0;
}
