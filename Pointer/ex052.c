#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int* p_a, * p_b, * p_w;
	p_a = &a;
	p_b = &b;
	printf("é¿çsëO: a = %d\tb = %d", a, b);
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("\né¿çså„: a = %d\tb = %d", a, b);
}