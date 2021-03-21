/*
문제 1 (난이도 : 中)
N 줄인 삼각형을 출력한다. 단, 사용자로 부터 임의의 N 을 입력 받는다. 아래는 N = 3 일 때의 출력 예시 이다.

  *
 ***
*****
*/
#include <stdio.h>

int main()
{
	int n = 0;
	int x;

	for (x = 1; x <= 1000; x++)
	{
		if (x % 3 != 0 && x % 5 != 0) 
		{
			continue;
		}
		printf("A%d \n", x);
		n += x;
	}
	printf("%d", n);
	return 0;
}
