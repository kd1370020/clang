#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	char s[20];
	int i, k[20];
	srand(time(0));
	printf("���������͂��Ă�������>");
	scanf("%s", &s);
	for (i = 0;s[i] != '\0';i++) {
		printf("s[%d]�������L�[>", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("�Í���������́A%s\n", s);
}