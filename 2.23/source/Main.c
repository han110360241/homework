#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c, i, max, min;

	printf("請輸入三個數字\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b || a == b)
	{
		max = a;
		min = b;
	}
	if (b > a || b == a)
	{
		max = b;
		min = a;
	}

	if (c > max)
		max = c;
	if (c < min)
		min = c;

	printf("max is %d\n", max);
	printf("min is %d\n", min);

	system("pause");
	return 0;
}