#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	char s[20];
	int i, k[20];
	srand(time(0));
	printf("文字列を入力してください>");
	scanf("%s", &s);
	for (i = 0;s[i] != '\0';i++) {
		printf("s[%d]復元化キー>", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("暗号化文字列は、%s\n", s);
}