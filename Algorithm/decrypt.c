#include<stdio.h>
main() {
	char s[600];
	int i;
	printf("�Í������������͂��Ă�������>");
	scanf("%s", &s);
	for (i = 0;s[i] != '\0';i++) {
		s[i] -= 1;
	}
		printf("%s", s);
}