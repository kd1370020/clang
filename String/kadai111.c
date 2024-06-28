#include<stdio.h>
main() {
	int i;
	char a[6] = { "abcde" };
	for (i = 0;a[i] != '\0';i++) {
		printf("%c", a[i]);
	}
}