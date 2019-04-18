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
int choise (void) {
	printf ("what calculator to open?");
	int ch;
	printf ("1 - vect_calc\n2 - calc");
	scanf("%i", &ch);
	if (i == 1)  // написать: выполн€й код дл€ векторного калькул€тора
	if (i == 2) // вып дл€ нормального
	else (
			printf("enter operation from list:");
			scanf ("%i", ch);
			)
}

float vektor_calc (void) {

	int s = 0; // s - "щелчок", дающий программе сигнал о начале работы
	int t = 1; // t  - типа r (см.далее)
	while ( t != 0) {
		float x1, y1;
		printf ("enter \"x1\"");
		printf ("enter \"y1\"");
		scanf("%f", &x1);
		scanf("%f", &y1);

		int o; // о - операци€, выполн€ема€ с векторами
printf("1 - summa\n2 - raznost\n3 - vect_umnozhenie");
puts("select operation:");
scanf("%i", &o);
while (s == 0) { //вот, пжл, этот самый "щелчок", здрасте
		if (o > 0 && o < 4)
			s = 1;
		else {
			printf("Operation does not exist. Select an operation from the list: ");
			scanf("%d", &o); }

	float x2, y2;
	printf ("enter \"x2\"");
	printf ("enter \"y2\"");
	scanf("%f", &x2);
	scanf("%f", &y2);

	float v, w;
	switch (o) {
	case 1:
		v = (x1 + x2, y1 + y2);
		printf ("result: %f", &v);
		break;
	case 2:
		v = (x1 - x2, y1 - y2);
		printf ("result: %f", &v);
		break;
	case 3:
		v = (x1 * x2, y1 * y2);
		printf ("result: %f", &v);
		break;
	}
		}
 int main(void)
 {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int f; //где f - "щелчок", дающий сигнал, призывающий программу работать
	f = 0;
	int r = 1; //r - переменна€, позвол€юща€ пользователю в конце программы выбрать, закрыть калькул€тор или продолжить работу
 while (r != 0) {
	float a, b;
	printf("enter the first number:");
	scanf("%f", &a);
	int k; // k - переменна€, обозначающа€ выбор операции
	printf("1 - \"+\"\n2 - \"-\"\n3 - \"*\"\n4 - \"/\"\n5 - \"!\"\n6 - \"**\"\n");
	puts("select operation: ");
	scanf("%d", &k);
	while (f == 0) { //вот, пжл, этот самый "щелчок", здрасте
		if (k > 0 && k < 7)
			f = 1;
		else {
			printf("Operation does not exist. Select an operation from the list: ");
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
		printf("result: %f", c);
		break;
	case 6:
		c = a;
		for (int i = 2; i <= b; i++) {
			a = a * c;
		}
		printf("result: %f", a);
		break;
		printf ("\nDo you want to continue working with the program? \nenter 1 (yes) or 0 (no)");
		scanf ("%d", &r);
	}
//kill me please
		if (r == 0)	{
			printf ("exit");
			break;  }
 }
	return 0;
}
