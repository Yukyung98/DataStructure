#include <stdio.h>
//반복적인 팩토리얼 계산 프로그램
/*int Factorial(int num)
{
    int i, result = 1;
    for( i=2; i<=num;i++){
    result *=i;
    }
    return result;
}*/
// 순환적인 팩토리얼 계산 프로그램
int Factorial(int num){
    int i, result = 1;
    if(num<=1) return 1;
    else return num*Factorial(num-1);
}

int main(){
    int i ;
    for(i =1; i<=10;i++){
        printf("%2d!= %d \n",i,Factorial(i));
    }
    return 0;
}