#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;
	for (i = 1; i <= 9; i++)
	{
		if (i == 1 || i == 9)
		{
			for (j = 1; j <= 9; j++)
			{
				printf(".");
			}
		}
		else
		{
			for (j = 1; j <= 2; j++)
			{
				printf(".       ");
			}
		}
		printf("\n");
	}

	for (i = 1; i <= 9; i++)
	{
		if (i == 1 || i == 9)
		{
			printf("   ");
			for (j = 1; j <= 3; j++)
			{
				printf(".");
			}
		}
		else if (i == 2 || i == 8)
		{
			printf(" ");
			for (j = 1; j <= 2; j++)
			{
				printf(".     ");
			}
		}
		else
		{
			for (j = 1; j <= 2; j++)
			{
				printf(".       ");
			}
		}
		printf("\n");
	}

	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 3 - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i * 2 - 1; j++)
		{
			printf(".");
		}

		printf("\n");
	}
	for (i = 1; i <= 6; i++)
	{
		printf("  .");
		printf("\n");
	}

	for (i = 1; i <= 5; i++)
	{
		if (i == 1)
		{
			printf("    .");
			printf("\n");
		}
		else
		{
			for (j = 1; j <= 5 - i; j++)
			{
				printf(" "); //輸出前空格
			}
			printf(".");
			for (k = 1; k <= 2 * i - 3; k++)
			{
				printf(" ");
			}
			printf(".\n");
		}
	}
	for (i = 1; i <= 4; i++)
	{
		if (i == 4)
		{
			printf("    .");
			printf("\n");
		}
		else
		{
			for (j = 1; j <= i; j++)
			{
				printf(" "); //輸出前空格
			}
			printf(".");
			for (k = 1; k <= 2 * (5 - i) - 3; k++)
			{
				printf(" ");
			}
			printf(".\n");
		}
	}

	system("pause");
	return 0;
}