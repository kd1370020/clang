#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);

main() {
	int a, b, c, d, e, f;
	printf("”’l‚P?");
	scanf("%d", &a);
	printf("”’l‚Q?");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f );
	puts("”’l‚P‚Æ”’l‚Q‚Ìl‘¥‰‰Z");
	printf("wa = %d sa = %d  seki = %d syo = %d", c, d, e, f);
}

void shisoku(int a,int b,int *c,int *d,int *e,int *f) {
	*c = a + b;
	*d = a - b;
	*e = a * b;
	*f = a / b;
}