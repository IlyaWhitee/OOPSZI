#include <locale.h>
#include <stdio.h>
#include "func.h"


void main(void)
{
	setlocale(LC_CTYPE, "rus");
	int c = 0;
	while (1)
	{
		printf("����\n ������� ����� ������� �� 1 �� 4\n ��� ������ �� ���� ������� 0: ");
		c = input_i();
		switch (c)
		{
		case 0:
			system("pause");
			return 0;
		case 1:
			printf("������� 1: \n");
			incrementStack();
			break;
		case 2:
			printf("������� 2: \n");
			HeapVariable();
			break;
		case 3:
			printf("������� 3: \n");
			StackArray();
			break;
		case 4:
			printf("������� 4: \n");
			HeapArray();
			break;
		default: 
			printf("�������� ����� �������!\n");
			break;

		}
	}
	
}