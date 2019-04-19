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
	int t = 1; // t  - типа r (см. далее)
	while (t != 0) {
		int n; // n  -количество координат (n-мерное пространсктво)
		printf("enter number of coorditates: ");
		scanf("%i", &n);
		float *vect1, *vect2;
		vect1 = malloc(n * sizeof(float));
		vect2 = malloc(n * sizeof(float));

		int s = 0; // s - щелчок, указывающий на начало работы
		printf("enter the coordinates of the first vector: ");
		for (int i = 0; i < n; i++) {
			scanf("%f", &vect1[i]);
		}
		printf("enter the coordinates of the second vector: ");
		for (int j = 0; j < n; j++) {
			scanf("%f", &vect2[j]);
		}

		int o; // о - операция над векторами
		printf("1 - summa\n2 - raznost\n3 - vect_umnozhenie");
		puts("select operation:");
		scanf("%i", &o);
		while (s == 0) { //опа, вот этот "щелчок", здрасте
			if (o > 0 && o < 4)
				s = 1;
			else {
				printf(
						"Operation does not exist. Select an operation from the list: ");
				scanf("%d", &o);
			}
		}

		float sum = 0;
		switch (o) {
		case 1:
			printf("result: ");
			for (int i = 0; i < n; i++) {
				printf("%.0f ", vect1[i] + vect2[i]);
			}
			break;
		case 2:
			printf("result: ");
			for (int i = 0; i < n; i++) {
				printf("%.0f ", vect1[i] - vect2[i]);
			}
			break;
		case 3:
			printf("result: ");
			for (int i = 0; i < n; i++) {
				sum = sum + (vect1[i] * vect2[i]);
			}
			printf("%.0f", sum);
			break;
		}
		printf(
				"\nDo you want to continue working with the program? \nenter 1 (yes) or 0 (no)");
		scanf("%d", &t);
	}
	printf("exit");

	return 0;
}

int calc(void) {
	int f;
	f = 0;
	int r = 1;
	while (r != 0) {
		float a, b;
		printf("enter the first number:");
		scanf("%f", &a);
		int k; // k - ����������, ������������ ����� ��������
		printf(
				"1 - \"+\"\n2 - \"-\"\n3 - \"*\"\n4 - \"/\"\n5 - \"!\"\n6 - \"**\"\n");
		puts("select operation: ");
		scanf("%d", &k);
		while (f == 0) {
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
		printf(
				"\nDo you want to continue working with the program? \nenter 1 (yes) or 0 (no)");
		scanf("%d", &r);
	}
	printf("exit");
	return 0;
}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("what calculator to open? ");
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

