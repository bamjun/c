#include <stdio.h>
int main() {
  printf("Hello, World! \n");
  
  int a;
  a = 127;
  //%o 8진수 %d 10진수 %x 16진수 %f 실수
  printf("a 의 값은 %d 진수로 %o 입니다. \n", 8, a);
  printf("a 의 값은 %d 진수로 %d 입니다. \n", 10, a);
  printf("a 의 값은 %d 진수로 %x 입니다. \n", 16, a);
  
  /*
  float a = 3.141592f;
  double b = 3.141592;
  a : 3.141592 
  b : 3.141592 
  */
  
  float a = 3.141592f;
  double b = 3.141592;
  int c = 123;
  printf("a : %.2f \n", a);
  // 3.14
  printf("c : %5d \n", c);
  //  123   5자리수
  printf("b : %6.3f \n", b);
  //3.142
  
  /*
  a = 5;
  b = 5;
  c = 5;
  d = 5;
  a = b = c = d = 5;
  */
  
  
  
  return 0;
}
