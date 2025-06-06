#include<stdio.h>

//Write a program to give a Grade to the student 

int main(){
    char CH;
    printf("Enter a Later: ");
    scanf("%c", &CH);

    if (CH >= 'A' && CH <= 'Z') {
        printf("Upper Case \n");
    }
    else if (CH >= 'a' && CH <= 'z') {
        printf("Lower Case \n");
    }
    else{
        printf("NOT a English latter");
    }
}