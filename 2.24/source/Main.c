#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("Enter a integer, and I will tell you\n");
	printf("it's odd or even\n");
		scanf_s("%d", &a);
		if (a % 2 ==1)
		{
			printf("%d is odd\n", a);
		}
		else
		{
			printf("%d is even\n", a);
		}
	system("pause");
	return 0;
}