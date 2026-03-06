#include <stdio.h>
int add(int a,int b){
    return a+b;
}

int main(){
    int a, b, results;
    printf("enter first number:");
    scanf("%d", &a);
    printf ("enter second number:");
    scanf ("%d", &b);
    results = add(a,b);
    printf("sum=%d \n", results);
    return 0;

}