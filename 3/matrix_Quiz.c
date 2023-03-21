#include <stdio.h>
#include <stdlib.h>
#define row 3
#define cols 3
//주어진 2개의 행렬을 더하는 함수 만들기
void add_matrix(int a[row][cols], int b[row][cols]){
    int result[row][cols];
    for(int i =0;i<row;i++){
        for(int j=0;j<cols;j++){
            result[i][j]=a[i][j]+b[i][j];
        }
    } 
    printf("============\n");
    for(int r= 0; r<row;r++){
        for (int c =0; c<cols;c++)
            printf("%d ",result[r][c]);
        printf("\n");
    }
    printf("===============\n");
}
void matrix_print(int A[row][cols])
{
    printf("============\n");
    for(int r= 0; r<row;r++){
        for (int c =0; c<cols;c++)
            printf("%d ",A[r][c]);
        printf("\n");
    }
    printf("===============\n");
}
int main(void)
{
    int array1[row][cols]={{2,3,0},
                            {8,9,1},
                            {7,0,5}};
    int array2[row][cols]={{1,3,0},
                            {0,0,1},
                            {3,0,2}};

    add_matrix(array1,array2);

    
    return 0;
}