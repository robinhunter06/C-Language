#include<stdio.h>

// IF, ELSE IF, ELSE Statements

int main(){
    int Marks;
    printf("Enter a Marks: ");
    scanf("%d", &Marks);

    if (Marks >= 90){
        printf("Grade is A++ \n");
    }
    else if (Marks >= 80){
        printf("Grade is A+ \n");
    }
    else if (Marks >= 70){
        printf("Grade is A \n");
    }
    else if (Marks >= 60){
        printf("Grade is B+ \n");
    }
    else if (Marks >= 50){
        printf("Grade is B \n");
    }
    else if (Marks >= 40){
        printf("Grade is C \n");
    }
    else if (Marks >= 35){
        printf("Grade is D \n");
    }
    else{
        printf("Grade is Failed \n");
    }
    return 0;
}