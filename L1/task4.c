#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void function();
double x, func;
int main(void)
{
	system("chcp 1251");
	system("cls");
	 x = 3;
	 function();
	printf("��������� ��� x=3 \n f=%.3lf \n",func );
	printf("������� x=");
	scanf_s("%lf", &x);
	function();
	printf("��������� ��� x ��������� � ���������� \n f=%.3lf \n", func);
	getchar(), getchar();
	return 0;
}
void function(void)
{
	func = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}