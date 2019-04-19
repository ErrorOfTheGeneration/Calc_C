/*
 ============================================================================
 Name        : Calculator.c
 Author      : Irina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float vektor_calc(void) {
	int s = 0; // s - "������", ������ ��������� ������ � ������ ������
	int t = 1; // t  - ���� r (��.�����)
	while (t != 0) {
		float x1, y1;
		printf("enter \"x1\"");
		printf("enter \"y1\"");
		scanf("%f", &x1);
		scanf("%f", &y1);

		int o; // � - ��������, ����������� � ���������
		printf("1 - summa\n2 - raznost\n3 - vect_umnozhenie");
		puts("select operation:");
		scanf("%i", &o);
		while (s == 0) { //���, ���, ���� ����� "������", �������
			if (o > 0 && o < 4)
				s = 1;
			else {
				printf(
						"Operation does not exist. Select an operation from the list: ");
				scanf("%d", &o);
			}
		}
		float x2, y2;
		printf("enter \"x2\"");
		printf("enter \"y2\"");
		scanf("%f", &x2);
		scanf("%f", &y2);

		switch (o) {
		case 1:
			printf("result: %f %f", x1 + x2, y1 + y2);
			break;
		case 2:
			printf("result: %f %f", x1 - x2, y1 - y2);
			break;
		case 3:
			printf("result: %f", x1 * x2 + y1 * y2);
			break;
		}
		printf("\nDo you want to continue working with the program? \nenter 1 (yes) or 0 (no)");
		scanf("%d", &t);
	}
	if (t == 0) {
			printf("exit");
		}

	return 0;
}

int calc(void) {
	int f; //��� f - "������", ������ ������, ����������� ��������� ��������
	f = 0;
	int r = 1; //r - ����������, ����������� ������������ � ����� ��������� �������, ������� ����������� ��� ���������� ������
	while (r != 0) {
		float a, b;
		printf("enter the first number:");
		scanf("%f", &a);
		int k; // k - ����������, ������������ ����� ��������
		printf(
				"1 - \"+\"\n2 - \"-\"\n3 - \"*\"\n4 - \"/\"\n5 - \"!\"\n6 - \"**\"\n");
		puts("select operation: ");
		scanf("%d", &k);
		while (f == 0) { //���, ���, ���� ����� "������", �������
			if (k > 0 && k < 7)
				f = 1;
			else {
				printf(
						"Operation does not exist. Select an operation from the list: ");
				scanf("%d", &k);
			}
		}
		if (k != 5) {
			printf("enter the second number: ");
			scanf("%f", &b);
		}
		float c;
		float d;
		switch (k) {
		case 1:
			c = a + b;
			printf("result: %f", c);
			break;
		case 2:
			c = a - b;
			printf("result: %f", c);
			break;
		case 3:
			c = a * b;
			printf("result: %f", c);
			break;
		case 4:
			d = a / b;
			printf("result: %f", d);
			break;
		case 5:
			c = 1;
			for (int i = 1; i <= a; i++)
				c = c * i;
			printf("result: %.2f", c);
			break;
		case 6:
			c = a;
			for (int i = 2; i <= b; i++) {
				a = a * c;
			}
			printf("result: %f", a);
			break;
		}
		printf("\nDo you want to continue working with the program? \nenter 1 (yes) or 0 (no)");
		scanf("%d", &r);

		if (r == 0) {
			printf("exit");
			break;
		}
	}
	return 0;
}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("what calculator to open?");
	int ch;
	printf("\n1 - vect_calc\n2 - calc");
	scanf("%i", &ch);
	if (ch == 1)
		vektor_calc();
	else if (ch == 2)
		calc();
	else
		printf("You entered an incorrect number. The program is complete.");
	return 0;
}

