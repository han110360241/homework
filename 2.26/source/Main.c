#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;
	printf("�п�J��Ӿ��");
	scanf_s("%d %d", &a, &b);

	if (a % b == 0)
		printf("�@�O�G������\n");
	else
		printf("�@�����G������\n");




	system("pause");
	return 0;
}