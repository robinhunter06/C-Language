#include<stdio.h>

int main(){
    //Number is natural number or not
    int n;
    printf("Enter value fo n: ");
    scanf("%d" ,&n);

    if(n >= 1){
        printf("number is natural");
    }else{
        printf("number is not natural");
    }
    return 0;
}