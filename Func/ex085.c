#include<stdio.h>
void ab(char* p1, char* p2);

main() {
	char a[512], b[256];
	printf("�z��@a:");
	scanf("%s", &a);
	printf("\n�z��@b:");
	scanf("%s", &b);
	ab(a, b);
	printf("\n�z�� a:%s", a);
}

void ab(char* p1, char* p2) {
	int i, j;
	for (i = 0;*(p1 + i) != '\0';i++){}
	for (j = 0;*(p1 + i) = *(p2 + j);j++, i++) {}
}