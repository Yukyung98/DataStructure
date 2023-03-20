#include <stdio.h>
//순환적인 피보나치수열
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return (fib(n-1)+fib(n-2));
}
//반복적인 피보나치 수열
int fib_iter(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;

    int pp =0;
    int p =1;
    int result = 0;

    for(int i = 2;i<=n;i++){
        result = p +pp;
        pp=p;
        p=result;
    }
    return result;
}

int main(void){
    int n,i;

    printf("몇 번쨰까지 피보나치 수열을 구할래? ; ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d번째 수 ", i);
        printf("%d \n",fib(i));
    }
    return 0;
}