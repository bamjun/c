/* 배열 출력하기 */
#include <stdio.h>
int main() {
  int arr[10] = {2, 10, 30, 21, 34, 23, 53, 21, 9, 1};
  int i;
  printf("%d%d \n", sizeof(arr),sizeof(arr) / sizeof(int));
  
  for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
    printf("배열의 %d 번째 원소 : %d \n", i + 1, arr[i]);
  }
  return 0;
}
/*
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
*/
