#include<stdio.h>
void str(char *s1,char *s2);
main() {
	char str1[256], str2[256];
	printf("•¶Žš—ñ");
	scanf("%s", &str1);
	str(str1,str2);
	printf("str1:%s\nstr2:%s", str1,str2);
}

void str(char *s1,char *s2) {
	int i, j;
	for (i = 0;*(s1 + i) != '\0';i++) {}
	for (i--,j = 0;i >= 0;i--, j++) {
		*(s2 + j) = *(s1 + i);
	}
	*(s2 + j) = '\0';
}