#include<stdio.h>
main() {
	int a = 5, b = 30,wrk;
	int* p_a = &a, * p_b= &b,*p_w = &wrk;
	puts("Às‘O");
	printf("a = %d b = %d\n", *p_a, *p_b);
	//p_w = p_a;
	*p_w = *p_a;
	*p_a = *p_b;
	*p_b = *p_w;
	printf("a = %d b = %d\n", a, b);
}