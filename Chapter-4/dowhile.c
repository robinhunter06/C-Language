#include<stdio.h>

int main(){
    //print the numbe from 0 to n, if n is given ny user

    int n;
    printf("Enter a number for n: ");
    scanf("%d", &n); 
    
    int i = 1;
    do{
        printf("%d \n",i);
        i++;
    }
    while (i <= n);
    return 0;
}