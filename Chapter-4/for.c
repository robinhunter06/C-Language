#include<stdio.h>

int main(){
    //For Loop 
    //Increment Opetrator
    //pre-increment
    for (int i = 1; i <= 3; i++){
        printf("%d \n", i);//increase, then use
    }
    
     //post-increment
    for (int i = 1; i <= 3; ++i){
        printf("%d \n", i);//use then increase
    }
    
    //Decrement Opetrator
    //pre-Decrement
    for (int i = 3; i >= 1; i--){
        printf("%d \n", i);//Decrement, then use
    }
    
    //post-increment
    for (int i = 3; i >=1; --i){
        printf("%d \n", i);//use then, Decrement
    }

    //Float Values
    for (float i = 1.0; i <= 3.0; i++){
        printf("%f \n", i);
    }
    
    //Characters
    for (char ch = 'a'; ch <= 'z'; ch++){
        printf("%c \n", ch);
    }
    
    
    return 0;
}