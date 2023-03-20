#include <stdio.h>
//반복적인 거듭제곱 계산 프로그램
double slow_power(double x, int n)
{
    int i;
    double result = 1.0;

    
    for (i=0;i<n;i++)
        result = result * x;
    printf("%f \n",result);
    return result;
    
}
//순환적인 거듭제곱 계산 프로그램
double power(double x,int n)
{
    printf("%f \n",x);
    if(n==0) return 1;
    else if ( (n%2)==0)
        return power(x*x,n/2);
    else return x*power(x*x,(n-1)/2);
    
}

int main(void){
    slow_power(4.0,2);
    
    power(4.0,2);
}