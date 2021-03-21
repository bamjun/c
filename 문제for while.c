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
	int n, x, y, u;
	int i = 1;
	printf("줄수를 입력하세욥 :");
	scanf("%d", &n);
	for (x = 1; x <= n; x++)
	{
		
		for (y = 1; y <= (n - x) ; y++)
		{
			printf(" ");
		}
		for (y = 1; y <= i; y++)
		{
			printf("*");
		}
		printf("\n");

		i += 2;

	}

	return 0;
}




/*
문제 2 (난이도 : 中上)
위와 동일한 형태를 취하되, 역 삼각형을 출력한다. 아래는 N = 3 일 때의 출력 예시 이다.

*****
 ***
  *
*/

#include <stdio.h>

int main()
{
	int n, x, y, u;
	int i = 1;
	printf("줄수를 입력하세욥 :");
	scanf("%d", &n);
	i = 2 * (n - 1) + 1;
	for (x = 1; x <= n; x++)
	{
		
		for (y = 1; y <= (x - 1) ; y++)
		{
			printf(" ");
		}
		for (y = 1; y <= i; y++)
		{
			printf("*");
		}
		printf("\n");

		i -= 2;

	}

	return 0;
}

/*
문제 3 (난이도 : 下)
1000 이하의 3 또는 5 의 배수인 자연수들의 합을 구한다.
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


/*
문제 4 (난이도 : 中)
1000000 이하의 피보나치 수열 ( N 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열, 시작은 1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다
*/

#include <stdio.h>

int main()
{
	int a = 1, b = 1, c;
	int i = 3;
	int a_sum = 1;
	while(a_sum <= 1000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (i % 2 == 0)	a_sum += b;
		i++;
		
	}
	printf("%d", a_sum);


	return 0;
}
