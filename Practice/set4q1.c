#include<stdio.h>

int main(){
    /*. Search on what a "nested loop" is & print this pattern using it.
     ***** 
    ********
     *******
    */
     
    for(int i = 1; i <= 5;i++){
        printf("%c \n", '*');
    }
    for(int j = 1;j <=8;j++){
            printf("%c \n", '*');
        }
        for(int k = 1;k <=7;k++){
            printf("%c ", '*');
        }
    return 0;
}