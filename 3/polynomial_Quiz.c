#include <stdio.h>
#define MAX(a,b) (((a)>(b)?(a):(b))) // A>B가 참이면 A,아니면 B
#define MAX_DEGREE 101
#define MAX_TERMS 101

typedef struct //다항식 구조체 타입 선언
// 타입 재정의를 이용해 지금구조체를 Polynomial로 타입화
{
    int degree; // 다항식의 차수
    float coef[MAX_DEGREE]; // 다항식 계수
} polynomial;
typedef struct //다항식 구조체 타입 선언
// 타입 재정의를 이용해 지금구조체를 Polynomial로 타입화
{
    float coef; // 다항식 계수
    int degree; // 다항식의 차수
} polynomial2;

polynomial2 terms[MAX_TERMS]={{8,3},{7,1},{1,0},{10,3},{3,2},{1,0}};
int avail =6;

float poly_eval_1(polynomial p ,int x){
    float result = 0;
    for(int i =0; i<=p.degree;i++){
        float degree_sum =1;
        for(int j =0;j<p.degree-i;j++){
            degree_sum *=x;
        }
        result += p.coef[i] * degree_sum;
    }
    return result;
}

int poly_eval_2(int s,int e, int x){
    int result=0;
    for(int i = s; i<=e;i++){
        int sum =1;
        for(int j = 0; j<terms[i].degree;j++){
            
            sum *= x;

        }
        result += terms[i].coef * sum;
    }
    return result;
}
int main(){
    int As=0, Ae=2, Bs=3, Be=5, Cs,Ce; 
    
    polynomial a = {5,{3,6,0,-5,0,1,0}};
    polynomial b = {4,{7,0,5,0,1}};
    polynomial c;

    printf("%3.1lf \n",poly_eval_1(a,2));
    printf("%d ",poly_eval_2(As,Ae,3));

    return 0;
}