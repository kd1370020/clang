#include<stdio.h>
main()
{
	char a, b;
	a = '5', b = '6';
	printf("%c �~ %c = %i", a, b, (a - '0') * (b - '0'));
}