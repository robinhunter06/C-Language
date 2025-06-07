#include<stdio.h>

int main(){
    // print a table giving user input
    int n;
    printf("Enter value fo n: ");
    scanf("%d" ,&n);

    for (int i = 1; i <= 10; i++){
        printf("%d \n", i * n);
    }
    return 0;
}