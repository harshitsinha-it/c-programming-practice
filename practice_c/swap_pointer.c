#include<stdio.h>
void swapnum(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a,b;
    printf("enter value of A=");
    scanf("%d", &a);
    printf("enter value of B=");
    scanf("%d", &b);
    swapnum(&a,&b);
    printf("swapped value of A=%d \n", a);
    printf("swapped value of B=%d \n", b);
    return 0;
}