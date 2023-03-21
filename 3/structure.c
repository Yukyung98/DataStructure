#include <stdio.h>
//구조체 연습해보기
typedef struct sutdentTag
{
    char name[10];
    int age;
    double gpa;
} student;

int main(void){
    student a={"kim",20,4.3};
    student b={"lee",21,4.1};
    printf("%d살이다.",a.age);
    return 0;
}
