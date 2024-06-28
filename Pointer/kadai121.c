#include<stdio.h>
main() {
	int a = 100, b = 10;
	int* p_a = &a, * p_b= &b;
	printf("100 + 10 = %d\n",*p_a + *p_b);
	printf("100 - 10 = %d\n", *p_a - *p_b);
	printf("100 * 10 = %d\n", *p_a * *p_b);
	printf("100 / 10 = %d\n", *p_a / *p_b);
}