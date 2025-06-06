#include<stdio.h>

//Ternery Statement

int main(){
    int age;
    printf("Enter Age : ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult \n") : printf("Not Adult \n");

    return 0;
}