#include <stdio.h>
#define MAX(a,b) (((a)>(b)?(a):(b))) // A>B가 참이면 A,아니면 B
#define MAX_DEGREE 101

typedef struct //다항식 구조체 타입 선언
// 타입 재정의를 이용해 지금구조체를 Polynomial로 타입화
{
    int degree; // 다항식의 차수
    float coef[MAX_DEGREE]; // 다항식 계수
} polynomial;

//C=A+B 여기서 A와 B는 다항식이다 .
// 반환 해야될 값이 아까 만들어둔 구조체 Polynomial 타입을 사용
polynomial Poly_add(polynomial A, polynomial B)
{
    polynomial C;       //결과 다항식
    int Apos =0, Bpos = 0, Cpos =0; // 배열 인덱스 변수
    int degree_a=A.degree;
    int degree_b=B.degree;
    C.degree = MAX(A.degree, B.degree); //A항과 B항의 차 수 중 더 큰 것을 C형의 차수로

    while (Apos <= A.degree && Bpos <= B.degree){ //현재 계산중인 A항의 차수 >B항의 차수
        if (degree_a > degree_b){ 
            C.coef[Cpos++] = A.coef[Apos++];
            degree_a--;
        }
        else if (degree_a == degree_b){ // A항 차수 = B항 차수
            C.coef[Cpos++]=A.coef[Apos++]+B.coef[Bpos];
            degree_a--;
            degree_b--;
        }
        else { //B항차수 >A항 차수
            C.coef[Cpos++]=B.coef[Bpos++];
            degree_b--;
        }
    }
    return C;
}

void print_poly(polynomial p){
    for(int i= p.degree;i>0;i--){
        if(!p.coef[p.degree-i]) continue;
        printf("%3.1lfx^%d + ",p.coef[p.degree - i],i);
    }
    printf("%3.1lf\n",p.coef[p.degree]);
}

int main(){
    polynomial a = {5,{3,6,0,-5,0,1,0}};
    polynomial b = {4,{7,0,5,0,1}};
    polynomial c;

    print_poly(a);
    print_poly(b);
    c=Poly_add(a,b);
    print_poly(c);


    return 0;
}