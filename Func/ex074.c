#include<stdio.h>
void display1(int n1);
void display2(int *n2);
main() {
	int a, b;
	printf("数値 a ?:");
	scanf("%d", &a);
	display1(a);
	printf("a = %d\n\n", a);
	printf("数値 b ?:");
	scanf("%d", &b);
	display2(&b);
	printf("b = %d", b);
}

void display1(int n) {
	printf("数値 a は、%dです\n", n);
	n += 10;
	return;
}

void display2(int *n) {
	printf("数値 b は、%dです\n", *n);
	*n += 10;
	return;
}