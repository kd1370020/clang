#include<stdio.h>
void ab(char* p1, char* p2);

main() {
	char a[512], b[256];
	printf("配列　a:");
	scanf("%s", &a);
	printf("\n配列　b:");
	scanf("%s", &b);
	ab(a, b);
	printf("\n配列 a:%s", a);
}

void ab(char* p1, char* p2) {
	int i, j;
	for (i = 0;*(p1 + i) != '\0';i++){}
	for (j = 0;*(p1 + i) = *(p2 + j);j++, i++) {}
}