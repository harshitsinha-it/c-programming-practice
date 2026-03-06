#include <stdio.h>
int add(int a,int b){
    return a+b;
}

int main(){
    int a, b, result;
    printf("enter first number:");
    scanf("%d", &a);
    printf ("enter second number:");
    scanf ("%d", &b);
    result = add(a,b);
    printf("sum=%d \n", result);
    return 0;

}