/* 배열 출력하기 */
#include <stdio.h>
int main() {
    int arr[10] = { 2, 10, 30, 21, 34, 23, 53, 21, 9, 1 };
    int i;
    int sum = 0;
    printf("배열의 바이트 크기%d 배열의 요소 크기%d \n", sizeof(arr), sizeof(arr) / sizeof(int));
    
    printf("오름차순\n");
    for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("배열의 %d 번째 원소 : %d \n", i + 1, arr[i]);
    }

    printf("내림차순\n");
    for (i = sizeof(arr) / sizeof(int) - 1; i >= 0; i--)
    {
        printf("배열의 %d 번째 원소 : %d \n", i + 1, arr[i]);
    }
    
    
    for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
        sum += arr[i];
    }
    prinf("배열 전체 합 %d", sum);
    
    
    int numarr[2][3] = {
        {1,2,3},  //[0][]
        {4,5,6},  //[1][]
    };
    
    int numarr1[2][3] = { 0, };
    
    int nu = sizeof(numarr11)    //48
    int col = sizeof(numarr1[0]) / sizeof(int);   //3
    int row = sizeof(numarr) / sizeof(numarr1[0]);    //2
    int j;
    for ( i = 0 ; i < col ; i++)
    {
        for (j = 0 ; j < row ; j ++)
        {
            printf("%d", numarr1[i][j]);
        }
        printf("\n");
        
    }
    
    
    const int ab = 3;
    //const int ab;  에러 초기값 설정 필수
    //ab = ab + 1; 에러 값 변경불가
    //상수는 변수의 정반대로 처음 정의시 그 값이 바로 주어지고, 그 값이 영원히 바뀌지 않습니다.
    //const (상수의 형) (상수 이름) = (상수의 값);
    printf("%d", ab);
    


    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //arr[0][0], arr[0][1], arr[0][2],  
    //arr[1][0], arr[1][1], arr[1][2],  
    //arr[2][0], arr[2][1], arr[2][2]

    int arr[] = {1, 2, 3, 4};
    int arr[4] = {1, 2, 3, 4};
    int arr[]   //에러 범위지정

    
    
    
    

    return 0;
}
/*
배열의 바이트 크기40 배열의 요소 크기10
오름차순
배열의 1 번째 원소 : 2
배열의 2 번째 원소 : 10
배열의 3 번째 원소 : 30
배열의 4 번째 원소 : 21
배열의 5 번째 원소 : 34
배열의 6 번째 원소 : 23
배열의 7 번째 원소 : 53
배열의 8 번째 원소 : 21
배열의 9 번째 원소 : 9
배열의 10 번째 원소 : 1
내림차순
배열의 10 번째 원소 : 1
배열의 9 번째 원소 : 9
배열의 8 번째 원소 : 21
배열의 7 번째 원소 : 53
배열의 6 번째 원소 : 23
배열의 5 번째 원소 : 34
배열의 4 번째 원소 : 21
배열의 3 번째 원소 : 30
배열의 2 번째 원소 : 10
배열의 1 번째 원소 : 2
*/
