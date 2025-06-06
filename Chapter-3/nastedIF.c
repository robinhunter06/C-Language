#include<stdio.h>

//Chapter 3 practice with lec

int main(){
    int Number;
    printf("Enter Number : ");
    scanf("%d", &Number);

    if (Number >= 0){
        printf("Positive \n");
        if (Number % 2 == 0){
            printf("Number is Even \n");
        } else {
            printf("Number is Odd \n");
        }
    } else {
        printf("Negative \n");
    }
    return 0;
}