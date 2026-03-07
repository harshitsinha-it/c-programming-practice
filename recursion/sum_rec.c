#include<stdio.h>
void sum(int s,int n){
    if (n==0) return;
    sum(s+n, n-1);
    printf("sum of 1-n numbers= %d \n", s);
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    sum(0,n);
    return 0;
}