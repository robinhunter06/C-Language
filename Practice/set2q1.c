#include<stdio.h>

//a.Write a program to print the average of 3 numbers.

int main(){
    
    float num1,num2,num3,avr;
    printf("Enter a three num: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    avr = (num1 + num2 + num3) / 3.0;

    printf("The Avarage is %.2f\n", avr);

    return 0;
}