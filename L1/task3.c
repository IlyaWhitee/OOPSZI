#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double function(double x);

int main()
{
	system("chcp 1251");
	system("cls");
	double f, x = 3;
	f = function(x);
	printf("Результат при x=3 \n f=%.3lf \n", f);
	printf("Введите x=");
	scanf_s("%lf", &x);
	f = function(x);
	printf("Результат при x введенном с клавиатуры \n f=%.3lf \n", f);

	getchar(), getchar();
	return 0;
}
double function(double x)
{
	double func;
	func = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
	return(func);

}