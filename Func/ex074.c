#include<stdio.h>
void display1(int n1);
void display2(int *n2);
main() {
	int a, b;
	printf("���l a ?:");
	scanf("%d", &a);
	display1(a);
	printf("a = %d\n\n", a);
	printf("���l b ?:");
	scanf("%d", &b);
	display2(&b);
	printf("b = %d", b);
}

void display1(int n) {
	printf("���l a �́A%d�ł�\n", n);
	n += 10;
	return;
}

void display2(int *n) {
	printf("���l b �́A%d�ł�\n", *n);
	*n += 10;
	return;
}