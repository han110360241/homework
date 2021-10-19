#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;

	printf("請輸入一個數字");
	scanf_s("%d", &a);

	if (a % 2 == 1)
		printf("%d is odd\n", a);
	if (a % 2 == 0)
		printf("%d is even\n", a);






	system("pause");
	return 0;
}