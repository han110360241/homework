#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j,a,b,c;

	printf("number       square      cube\n");
	for (i = 1; i <= 10; i++)
	{
		if (i * i == 100)
			printf("%d          % d        % d", i, i * i, i * i * i);
		else if (i * i * i > 63)
			printf("%d            %d          %d", i, i * i, i * i * i);

		else
		printf("%d            %d           %d", i, i * i, i * i * i);
		printf("\n");
	}

	system("pause");
	return 0;
}