#include<stdio.h>
main() {
	char s[30];
	int i;
	printf("文字を入力してください>");
	scanf("%s", &s);
	for (i = 0;s[i] != '\0';i++) {
		s[i] += 1;
	}
		printf("%s", s);
}