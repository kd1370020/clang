#include<stdio.h>
#include<string.h>
#define CNT 4
main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" }, * w;
	int i, j;
	char** p;
	p = p_tbl;
	for (i = 0;i < CNT - 1;i++) {
		for (j = i + 1;j < CNT;j++) {
			if (strcmp(*(p+i), *(p+j)) < 0) {
				w = *(p+j);
				*(p+j) = *(p+i);
				*(p+i) = w;
			}
		}
	}
	p = p_tbl;
	for (i = 0;i < CNT;i++) {
		printf("%s\n", *p++);
	}
}