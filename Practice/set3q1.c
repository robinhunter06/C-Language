#include<stdio.h>
#include<stdio.h>

int main(){
    // Given Number is Armstrong number or not
    /*153 is an Armstrong number of 3 digits, 
    since the sum of cubes of each digit is equal to the number itself.
    13 + 53 + 33= 153*/

    int num, orinum, rem, n=o,result =0;
    printf("Enter value fo n: ");
    scanf("%d" ,&num);

    orinum = num;

    //count the number of digits
    while (orinum != 0){
        orinum /= 10;
        n++;
    }

    orinum = num; //reset originalnum

    //calculate the sum of digits raised to power of n
    while (orinum != 0){
        rem = orinum % 10;
        result += pow(rem ,n);
        orinum /= 10;
    }
    // Check if the number is Armstrong
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}