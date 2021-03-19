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
  
  a = 0;
  for (;;)
	{
		scanf("%d", &a);
		if (a == 5) {
			printf("ok \n");
			break;
		}
		else {
			printf("no \n");
		}
	}
  
  
  
  
  return 0;
}
