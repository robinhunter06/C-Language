#include<stdio.h>

int main(){

    int a, b;
    printf("Enter value fo a & b: ");
    scanf("%d %d" ,&a , &b);

    if (a < b){
        printf("a is smallest than b", a);
    }else{
        printf("b is smallest than a", b);
    }
    return 0;
}