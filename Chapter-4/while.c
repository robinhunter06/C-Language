#include<stdio.h>

int main(){
    //print the numbe from 0 to n, if n is given ny user

    int n;
    printf("Enter a number for n: ");
    scanf("%d", &n);

    int i = 0;
    while ( i <= n ){
        printf("%d \n", i);
        i++;
    }
    return 0;
}