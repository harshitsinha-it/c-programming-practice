#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    char ch;
    printf("enter p for permutation and c for combination :");
    scanf("%c",&ch);
    if (ch =='p' || ch=='P'){
        int n,r;
        printf("enter n:");
        scanf("%d", &n);
        printf("enter r:");
        scanf("%d", &r);
        int fact_n=factorial(n);
        int fact_nr=factorial(n-r);
        int npr=fact_n/fact_nr;
        printf("permutation is:%d \n",npr);
    }
    else if (ch == 'c' || ch == 'C'){
        int n,r;
        printf("enter n:");
        scanf("%d", &n);
        printf("enter r:");
        scanf("%d", &r);
        int fact_n=factorial(n);
        int fact_r=factorial(r);
        int fact_nr=factorial(n-r);
        int ncr=fact_n/(fact_r*fact_nr);
        printf("combination is :%d \n",ncr);
    }
    else{
        printf("INVALID COMMAND, TRY AGAIN");
    }
    return 0;
}