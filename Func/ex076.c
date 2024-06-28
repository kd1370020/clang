#include<stdio.h>
void shisoku(int x, int y, int* wa, float* he);

main() {
	int a, b, c;
	float d;
	printf("®”‚ğ‚Q‚Â“ü—Í:");
	scanf("%d %d", &a,&b);
	shisoku(a, b, &c, &d);
	printf("‡Œv‚Í  %d •½‹Ï‚Í %.2f", c, d);
	return 0;
}

void shisoku(int a,int b,int *c,float *d) {
	*c = a + b;
	*d = *c / 2;
}