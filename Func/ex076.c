#include<stdio.h>
void shisoku(int x, int y, int* wa, float* he);

main() {
	int a, b, c;
	float d;
	printf("�������Q����:");
	scanf("%d %d", &a,&b);
	shisoku(a, b, &c, &d);
	printf("���v��  %d ���ς� %.2f", c, d);
	return 0;
}

void shisoku(int a,int b,int *c,float *d) {
	*c = a + b;
	*d = *c / 2;
}