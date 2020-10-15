#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, k;
	printf("Enter three integers, and I will tell you\n");
	printf("the largest and the smallest\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("%d is the largest\n", a);
		if (c < b)
		{
			printf("%d is the smallest\n", c);
		}
		else
		{
			printf("%d is the smallest\n", b);
		}
	}
	else if (b > a && b > c)
	{
		printf("%d is the largest\n", b);
		if (c < a)
		{
			printf("%d is the smallest\n", c);
		}
		else
		{
			printf("%d is the smallest\n", a);
		}
	}
	else
	{
		printf("%d is the largest\n", c);
		if (b < a)
		{
			printf("%d is the smallest\n", b);
		}
		else
		{
			printf("%d is the smallest\n", a);
		}
	}
	system("pause");
	return 0;
}