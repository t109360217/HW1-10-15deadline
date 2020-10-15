#include<stdio.h>
#include<stdlib.h>

int main() 
{
	float km, gas, av, pt, ps, s;
	printf("乘車花費計算程式\n");
	printf("請輸入一整天的總里程數:");
	scanf_s("%f", &km);
	printf("請輸入汽油一公升多少錢:");
	scanf_s("%f", &gas);
	printf("請輸入平均一公升能行駛多少公里:");
	scanf_s("%f", &av);
	printf("請輸入一天的停車費:");
	scanf_s("%f", &pt);
	printf("請輸入一天的通行費(過路費):");
	scanf_s("%f", &ps);
	s = (km / av) * gas + pt + ps;
	printf("你一天開車所需要的花費:%.2f", s);
	system("pause");
	return 0;
}
