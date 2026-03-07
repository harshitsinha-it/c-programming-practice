#include<stdio.h>
int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("swapped values are A=%d, B=%d \n", a,b);
    return 0;
}
int main(){
    int a,b;
    printf("enter value of A:");
    scanf("%d", &a);
    printf("enter value of B:");
    scanf("%d", &b);
    swap(a,b);
    return 0;
}