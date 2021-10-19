#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int miles, cpg, ampg, park, tolls,sum;
	printf("Total miles driven per day:");
	scanf_s("%d", &miles);
	printf("Cost per gallon of gasoline:");
	scanf_s("%d", &cpg);
	printf("Average miles per gallon:");
	scanf_s("%d", &ampg);
	printf("Parking fees per day:");
	scanf_s("%d", &park);
	printf("Tolls per day:");
	scanf_s("%d", &tolls);

	sum = (miles / ampg) * cpg + park + tolls;

	printf("total spent is %d", sum);

	system("pause");
	return 0;
}
