#include<stdio.h>

//Chapter 3 practice with lec

int main(){
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if (age > 18){
        printf("adult \n");
        printf("they can vote \n");
        printf("they can Drive \n");
    }
    else{
        printf("Not adult \n");
    }
    return 0;
}