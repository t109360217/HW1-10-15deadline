#include<stdio.h>
#include<stdlib.h>

int main() 
{
	float km, gas, av, pt, ps, s;
	printf("������O�p��{��\n");
	printf("�п�J�@��Ѫ��`���{��:");
	scanf_s("%f", &km);
	printf("�п�J�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &gas);
	printf("�п�J�����@���ɯ��p�h�֤���:");
	scanf_s("%f", &av);
	printf("�п�J�@�Ѫ������O:");
	scanf_s("%f", &pt);
	printf("�п�J�@�Ѫ��q��O(�L���O):");
	scanf_s("%f", &ps);
	s = (km / av) * gas + pt + ps;
	printf("�A�@�Ѷ}���һݭn����O:%.2f", s);
	system("pause");
	return 0;
}
