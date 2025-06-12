#include<stdio.h>
#include<math.h>
//Use library function to calculate the square of number given by user

int main(){

    int n;
    printf("Enter value fo n: ");
    scanf("%d" ,&n);

    printf("Square of number is: %f",pow(n,2));
    return 0;
}