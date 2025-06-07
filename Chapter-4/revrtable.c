#include<stdio.h>

int main(){
    //Print the reverse table of n
    int n;
    printf("Enter value fo n: ");
    scanf("%d" ,&n);

    for (int i= 10; i >=1; i--){
        printf("%d \n", n * i);
    }
    return 0;
}