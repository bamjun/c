#include <stdio.h>

int main()
{

  int *p;
  //포인트 선언 (자료형) * (포인터이름);
  int a;

  p = &a;
  //&(변수) 변수 주소 

  printf("포인터 p 에 들어 있는 값 : %p \n", p);
  printf("int 변수 a 가 저장된 주소 : %p \n", &a);
  //%p 주소값   
  
  int *p;
  int a;

  p = &a;
  *p = 3;
  
  printf("a 의 값 : %d \n", a);
  printf("*p 의 값 : %d \n", *p);
  //*(포인터) 변수의 값
  
  


  
 return 0 
}
