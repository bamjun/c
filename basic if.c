#include <stdio.h>
int main() 
{
  printf("Hello, World! \n");
  
  int a;
  a = 127;
  //%o 8진수 %d 10진수 %x 16진수 %f 실수 %% %표시  %u unsigned
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
  
  int a = 0xAF;  // 10101111
  int b = 0xB5;  // 10110101

  printf("%x \n", a & b);   // a & b = 10100101
  //and
  printf("%x \n", a | b);   // a | b =10111111
  //or
  printf("%x \n", a ^ b);   // a ^ b = 00011010
  // 두 수가 달라야지만 1 이 됩니다. 예를들어, 1100 ^ 1010 의 경우 결과가 0110 이 됩니다. 마치 두 비트를 더한 다는 식으로 생각하시면 됩니다.
  printf("%x \n", ~a);      // ~a = 1....1 01010000
  //반전 0 을 1 로 1 을 0 으로 바꿔주는 것입니다. 예를들어서 ~1100 을 하면 그 결과는 0011 이 됩니다.
  printf("%x \n", a << 2);  // a << 2 = 1010111100
  //101011  <<010110 
  printf("%x \n", b >> 3);  // b >> 3 = 00010110
  //11100010 >> 3 = 11111100 이 되고, 00011001 >> 3 = 00000011
  
  int a = 2147483647;
	printf("a의 값은 : %d \n", a);
	a++;
	printf("a의 값은 : %d \n", a);
	a--;
	printf("a의 값은 : %d \n", a);
	unsigned int b = 4294967295;
	printf("b의 값은 : %u \n", b);
	b++;
	printf("b의 값은 : %u \n", b);
	b = 0;
	b--;
	printf("b의 값은 : %u \n", b);
  /*
  a의 값은 : 2147483647
  a의 값은 : -2147483648
  a의 값은 : 2147483647
  b의 값은 : 4294967295
  b의 값은 : 0
  b의 값은 : 4294967295
  */
  
  char ch;  // 문자

  short sh;  // 정수
  int i;
  long lo;

  float fl;  // 실수
  double du;

  printf("char 형 변수 입력 : ");
  scanf("%c", &ch);

  printf("short 형 변수 입력 : ");
  scanf("%hd", &sh);
  printf("int 형 변수 입력 : ");
  scanf("%d", &i);
  printf("long 형 변수 입력 : ");
  scanf("%ld", &lo);

  printf("float 형 변수 입력 : ");
  scanf("%f", &fl);
  printf("double 형 변수 입력 : ");
  scanf("%lf", &du);

  printf("char : %c , short : %d , int : %d ", ch, sh, i);
  printf("long : %ld , float : %f, double : %f \n", lo, fl, du);
	
	

  int a = 31, b = 15;
  printf("a & b = %d\n", a & b);
  printf("a && b = %d\n", a && b);
	// & and 연산자   && 조건문and     if ( a && b)
	// | or연산자 || 조건문 or    if( a||b)
	// !a    a == 0
/*
	if ( a >= b)
	if ( a > b)
	if ( a <= b)
	if ( a < b)
	if ( a == b)
	if ( a != b)
*/

	
	
	

  
  
  return 0;
}
