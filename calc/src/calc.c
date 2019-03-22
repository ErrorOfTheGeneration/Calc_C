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

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int a, b, f;
	f = 0;
	printf("enter the first number:");
	scanf("%d", &a);

	int k;
	printf("1 - \"+\"\n2 - \"-\"\n3 - \"*\"\n4 - \"/\"\n5 - \"!\"\n6 - \"**\"\n");
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
		scanf("%d", &b);
	}

	int c;
	float d;
	switch (k) {
	case 1:
		c = a + b;
		printf("result: %d", c);
		break;
	case 2:
		c = a - b;
		printf("result: %d", c);
	case 3:
		c = a * b;
		printf("result: %d", c);
		break;
	case 4:
		d = a / b;
		printf("result: %f", d);
		break;
	case 5:
		c = 1;
		for (int i = 1; i <= a; i++)
			c = c * i;
		printf("result: %d", c);
		break;
	case 6:
		for (int i = 2; i <= b; i++) {
			a = a * a;
		}
		printf("result: %d", a);
		break;
	default:
		printf("Input Error\n");
	}

	return 0;
}
