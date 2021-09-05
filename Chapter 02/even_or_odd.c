// Created by Thiago Henrique Frois Menon Cunha
// On the date 04/09/2021

#include<stdio.h>

// This code prints on the screen if a given number is even or odd.
int main(){
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("%d is even.\n", number);
    if(number % 2 > 0)
        printf("%d is odd.\n", number);

    return 0;
}
