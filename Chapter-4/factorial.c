#include<stdio.h>

int main(){
    //print the factorial of number n
    // Factorial are 5! = 5*4*3*2*1 = 120

    int n;
    printf("Enter valune for N: ");
    scanf("%d", &n);

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("Factorial is %d",fact);

    return 0;
    
}