#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "head.h"


float func(int i)
{
	return pow(-1, i)*((pow(i, 2) + 1) / (pow(i, 3) + 3));
}


int main(void)
{
	setlocale(LC_CTYPE, "rus");
	printf("������� ������ ��������� 1) FOR 2) WHILE 3) DO WHILE:\n");
	int c = 0;
		switch (_getch())
		{
		case '1':
		{
			printf("�� ������� ������ ��� ��� ������� ������������ ������ FOR:\n");
			printf("������� ����� ������� �� 1 �� 5: ");
			switch (_getch())
			{
			case '1':
			{
				printf("������� 1\n ");
				int n;
				float a;
				printf("������� ����� n= ");
				scanf_s("%d", &n);
				a = reshwhile(n);
				printf("���������: %f\n", a);
				break;
			}
			case '2':
			{
				printf("������� 2\n ");
				float a1;
				float eps;
				printf("������� �������� eps= ");
				scanf_s("%f", &eps);
				a1 = reshwhile2(eps);
				printf("���������: %4f\n", a1);
				break;
			}
			case '3':
			{
				printf("������� 3\n ");
				int n1;
				int k;
				printf("������� ����� n= ");
				scanf_s("%d", &n1);
				printf("������� ����� k= ");
				scanf_s("%d", &k);
				reshfor3(n1, k);
				break;
			}
			case '4':
			{
				printf("������� 4\n ");
				int i;
				float eps;
				printf("������� �������� eps= ");
				scanf_s("%f", &eps);
				i = reshfor4(eps);
				printf("���������: %d\n", i);
				break;
			}
			case '5':
			{
				printf("������� 5\n ");
				int i;
				float eps;
				printf("������� �������� eps= ");
				scanf_s("%f", &eps);
				i = reshfor5(eps);
				printf("���������: %d\n", i);
				break;
			}
			case '6':
			{
				printf("������ ������� �� ����������\n ");
				break;
			}
			}
			break;
		}
		case '2':
		{
			printf("�� ������� ������ ��� ��� ������� ������������ ������ WHILE:\n");
			printf("������� ����� ������� �� 1 �� 5: ");
			switch (_getch())
			{
			case '1':
			{
				printf("������� 1\n ");
				int n;
				float a;
				printf("������� ����� n= ");
				scanf_s("%d", &n);
				a = reshwhile(n);
				printf("���������: %f\n", a);
				break;
			}
			case '2':
			{
				printf("������� 2\n ");
				float a1;
				float eps;
				printf("������� �������� eps= ");
				scanf_s("%f", &eps);
				a1 = reshwhile2(eps);
				printf("���������: %4f\n", a1);
				break;
			}
			case '3':
			{
				printf("������� 3\n");
				int n1;
				int k;
				printf("������� ����� n= ");
				scanf_s("%d", &n1);
				printf("������� ����� k= ");
				scanf_s("%d", &k);
				reshwhile3(n1, k);
				break;
			}
			case '4':
			{
				printf("������� 4\n ");
				int i;
				float eps;
				printf("������� �������� eps= ");
				scanf_s("%f", &eps);
				i = reshwhile4(eps);
				printf("���������: %d\n", i);
				break;
			}
			case '5':
			{
				printf("������� 5\n ");
				int i;
				float eps;
				printf("������� �������� eps= ");
				scanf_s("%f", &eps);
				i = reshwhile5(eps);
				printf("���������: %d\n", i);
				break;
			}
			case '6':
			{
				printf("������ ������� �� ����������\n ");
				break;
			}
			}
			break;
		}
		case '3':
		{
			printf("�� ������� ������ ��� ��� ������� ������������ ������ DO WHILE:\n");
			printf("������� ����� ������� �� 1 �� 5: ");
			switch (_getch())
			{
			case '1':
			{
				printf("������� 1\n ");
				int n;
				float a;
				printf("������� ����� n= ");
				scanf_s("%d", &n);
				a = reshdo(n);
				printf("���������: %f\n", a);
				break;
			}
			case '2':
			{
				printf("������� 2\n ");
				float a1;
				float eps;
				printf("������� �������� eps= ");
				scanf_s("%f", &eps);
				a1 = reshdo2(eps);
				printf("���������: %4f\n", a1);
				break;
			}
			case '3':
			{
				printf("������� 3\n ");
				int n1;
				int k;
				printf("������� ����� n= ");
				scanf_s("%d", &n1);
				printf("������� ����� k= ");
				scanf_s("%d", &k);
				reshdo3(n1, k);
				break;
			}
			case '4':
				printf("������� 4\n ");
				int i;
				float eps;
				printf("������� �������� eps= ");
				scanf_s("%f", &eps);
				i = reshdo4(eps);
				printf("���������: %d\n", i);
				break;
			case '5':
				printf("������� 5\n ");
				int i1;
				float eps1;
				printf("������� �������� eps= ");
				scanf_s("%f", &eps1);
				i1 = reshdo5(eps1);
				printf("���������: %d\n", i1);
				break;
			case '6':
				printf("������ ������� �� ����������\n ");
				break;
			}
			break;
		}
		
		{

		}
		
	}
	system("pause");
	return 0;
}