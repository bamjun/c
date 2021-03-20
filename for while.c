#include <stdio.h>

int main()
{
  int a;
  //a는 0부터 20보다 작으면 계속 a +1
  // 0부터 19까지 출력
  // for(초기; 조건; 증감)
  for (a=0; a<20; a++)
  {
    printf("%d \n", a);
  }
  //////////////////////////////// 5입력시 for 종료
  a = 0;
  for (;;)
  {
	  scanf("%d", &a);
	  if (a == 5) 		  
	  {
		  printf("ok \n");
		  break;
	  }
	  else 
	  {
		  printf("no \n");
		  
	  }
  }
	
	//////////////////////////////////////// 1부터 100까지 5의배수만 표시
	for (a = 1; a <= 100; a++)
	{
		if (a % 5 != 0)
		{
			continue;
		}
		else
		{
			printf("%d \n", a);
		}
	}
	
	///////////               구구단
	int x, y;
	
	for (x = 2; x <= 9; x++)
	{
		printf("----- %d단 -----  \n", x);
		for (y = 1; y <= 9; y++)
		{
			printf("%d * %d = %d \n", x, y, x * y);
		}
	}
/////////////////////////////////////////////////////////////////
	/////////while      반복 시작전 조건 검사
  int i = 1, sum = 0;

  while (i <= 100) {
    sum += i;
    i++;
  }

  printf("1 부터 100 까지의 합 : %d \n", sum);
////////////////////////////////
  //////////////// do while 반복 시작후 조건검사
  int i = 1, sum = 0;

  do {
    sum += i;
    i++;
  } while (i < 1);

  printf(" sum : %d \n", sum);
	///////////////////////////answer 1

	
	
  
  return 0;
}
