#include<stdio.h>

//Write a program to give a Grade to the student 

int main(){
    int Mark;
    printf("Enter a Marks: ");
    scanf("%d", &Mark);

    if (Mark < 30){
        printf("Grade C \n");
    }else if (Mark >= 30 && Mark < 70){
        printf("Grade B \n");
    }else if (Mark >= 70 && Mark < 90){
        printf("Grade A \n");
    }else if (Mark >= 90 && Mark < 100){
        printf("Grade A+ \n");
    }else{
        printf("Invalid Marks");
    }
}