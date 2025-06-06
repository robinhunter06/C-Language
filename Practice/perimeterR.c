#include<stdio.h>

/*Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.
*/


int main(){
    int a;
    int b;
    int d;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",2 * (a + b));
    return 0;
}