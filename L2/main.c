#include <stdio.h> //������������� ���������� �����/������ 

#include <math.h> //������������� �������������� ���������� 

#include <stdlib.h> //������������� ������� system 

double func(double x);

_Bool isInArea(double x, double y);

int main(void)
{

	system("chcp 1251"); /*������� � ������� �� ������� ����*/

	system("cls"); /*������� �������*/

	double x, y;

	int n;

	printf("�������� ������� 1 ��� 2:\n");

	scanf_s("%d", &n);

	switch (n)
	{

	case 1:
	{

		printf("���������� ������� �������:\n");

		printf("������� �=");

		scanf_s("%lf", &x);

		printf("������� Y=");

		scanf_s("%lf", &y);

		isInArea(x, y);

		printf("%d", isInArea(x, y));
	}

	break;

	case 2:

	{

		printf("���������� ������� �������:\n");

		printf("������� �=");

		scanf_s("%lf", &x);

		func(x);

		printf("%.3lf", func(x));

	}

	break;

	default:

		printf("������������ ���� ");

		break;

	}

	getchar();

	getchar();

	return(0);

}

//�������� �������, ������� ����� ������������ ��������� � �������������� ������� 
_Bool isInArea(double x, double y)

{

	if (x >= -1 && x <= 1)
		if (y >= x && y <= x && y >= -1 && y <= 1)
			return(1);
		else
			return(0);
	else
		return(0);

}

//�������� ������� ��� ������� ������� 

double func(double x)
{

	double f;

	x>0 ? (f = log(x) + 9) : (x = 2.645) ? (f = 0) : (f = -((x / (x*x - 7))));

	return(f);
}