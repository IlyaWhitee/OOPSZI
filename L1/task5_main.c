#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double function(double x);

int main(void)
{
	system("chcp 1251");
	system("cls");
	double f, x = 3;
	f = function(x);
	printf("��������� ��� x=3 \n f=%.3lf \n", f);
	printf("������� x=");
	scanf_s("%lf", &x);
	f = function(x);
	printf("��������� ��� x ��������� � ���������� \n f=%.3lf \n", f);

	getchar(), getchar();
	return 0;
}