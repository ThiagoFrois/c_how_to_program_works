// Created by Thiago Henrique Frois Menon Cunha
// On the date 04/09/2021

#include<stdio.h>

// This code prints on the screen result of operations involving a circle.
int main(){
    float radius;
    float PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("The diamenter is %f.\n", radius * 2);
    printf("The circumference is %f.\n", PI * radius * 2);
    printf("The area is %f.\n", PI * radius * radius);

    return 0;
}
