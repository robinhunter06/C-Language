#include <stdio.h>

int main(){
    //b.Write a program to check if given character is digit or not.

    char ch;
    printf("Enter a value: ");
    scanf("%c", &ch);

    if(ch >= '0' && ch <='9'){
        printf("Number is a ditit");
    }else{
        printf("Number is not digit");
    }

    return 0;
}