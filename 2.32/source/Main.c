#include<stdio.h>
#include<stdlib.h>

int main() 
{
	float wt, ht, bmi;
	printf("please enter your weight(kg):");
	scanf_s("%f", &wt);
	printf("please enter your height(m):");
	scanf_s("%f", &ht);
	bmi = wt / (ht * ht);
	printf("your BMI IS %.2f\n", bmi);
	printf("---------------------\n");
	printf("BMI values\n");
	printf("underweight:\tless than 18.5\n");
	printf("normal:\t\tbetween 18.5 and 24.9\n");
	printf("overweight:\tbetween 25 and 19.9\n");
	printf("obese:\t\t30 or greater\n");
	system("pause");
	return 0;
}
