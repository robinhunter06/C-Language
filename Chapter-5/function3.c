#include<stdio.h>

//Write a function to calculate area of sruare,circle& rectangle
float squarearea(float side);
float circlearea(float rad);
float ractarea(float a,float b);
int main(){

    float side;
    printf("Enter value for side: ");
    scanf("%f" ,&side);
    printf("Area of Suare is: %f \n",squarearea(side));

    float rad;
    printf("Enter value for rad: ");
    scanf("%f" ,&rad);
    printf("Area of circle is: %f \n",circlearea(rad));

    float a ;
    printf("Enter value for a: ");
    scanf("%f" ,&a);
     float  b;
    printf("Enter value for b: ");
    scanf("%f" ,&b);
    printf("Area of ractangle is: %f \n",ractarea(a,b));
    return 0;
}

float squarearea(float side){
    return side * side;
}
float circlearea(float rad){
    return 3.14 * rad * rad;
}
float ractarea(float a,float b){
    return a * b;
}