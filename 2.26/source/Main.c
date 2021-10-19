#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;
	printf("請輸入兩個整數");
	scanf_s("%d %d", &a, &b);

	if (a % b == 0)
		printf("一是二的倍數\n");
	else
		printf("一不為二的倍數\n");




	system("pause");
	return 0;
}