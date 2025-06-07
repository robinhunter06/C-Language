#include<stdio.h>

int main(){
    //print the sum of first N natural number also reverse numbder
    int n;
    printf("Enter value fo n: ");
    scanf("%d" ,&n);
    
    int sum = 0;
    for (int i = n;i >= 1; i--){
        sum = sum + i;
        printf("%d \n", i);
    }

    printf("Sum is %d \n", sum);
    return 0;
}