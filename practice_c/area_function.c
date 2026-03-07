#include<stdio.h>

float circle_area(float rad){
    return 3.14*rad*rad;
}

float square_area(float side){
    return side*side;
}

float rectangle_area(float a,float b){
    return a*b;
}

int main(){
    float a,b,rad,side;
    char ch;
    printf("enter C,S,R for circle,square,rect. repectively whose area u want to calculate =");
    scanf("%c",&ch);
    if(ch=='c' || ch=='C'){
        printf("enter radius of circle :");
        scanf("%f", &rad);
        printf("radius of circle = %f",circle_area(rad));
    }
    else if(ch=='s' || ch=='S'){
        printf("enter side of a square :");
        scanf("%f",&side);
        printf("area of square = %f",square_area(side));
    }
    else if(ch=='r'|| ch=='R'){
        printf("enter length of rectangle A :");
        scanf("%f",&a);
        printf("enter breadth of rectangle B :");
        scanf("%f",&b);
        printf("area of rectangle = %f",rectangle_area(a,b));
    }
    else{
        printf("INVAILD COMMAND");
    }
    return 0;
}