#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	float w ,bmi;
	float h;
	printf("�п�J����(m)");
	scanf_s("%f", &h);



	printf("�п�J�魫(kg)");
	scanf_s("%f", &w);

	bmi = w /( h * h);
	printf("BMI is %f\n", bmi);

	printf("BMI VALUES\n");
	printf("underweight: less than 18.5\n");
	printf("Normal: between 18.5 and 24.9\n");
	printf("Overwright:between 25 and 29.9\n");
	printf("Obese:30 or greater\n");



	system("pause");
	return 0;
}