#include<stdio.h>
// write a function that print namaste if user is indian and Bonjour if user is french

void namste();
void bonjour();
int main(){
    char ch;
    printf("Enter a f for french and i for indian: ");
    scanf("%c \n", &ch);

    if (ch == 'i'){
        namste();
    }else{
        bonjour();
    }
    return 0;
}

void namste(){
    printf("Namste \n");
}
void bonjour(){
    printf("Bonjour \n");
}
