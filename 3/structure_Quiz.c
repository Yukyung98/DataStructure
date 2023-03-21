#include <stdio.h>
#include <math.h>
//구조체를 변수로 하는 두 점 사이의 거리 구하기 프로그램

typedef struct Point
{
    int x;
    int y;
}Point;

int get_distance(Point p1, Point p2);
int main(void)
{
    Point p1 = {1,2};
    Point p2 = {9,8};
    printf("두 점 사이의 거리는 %d이다.",get_distance(p1,p2));
    return 0;
}
int get_distance(Point p1, Point p2){
    int n = (p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y);
    return sqrt(n);
}