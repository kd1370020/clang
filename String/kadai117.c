#include<stdio.h>
main() {
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i = 0;
	for (i = 0;i < 7;i++) {
		puts(day[i]);
		printf("\n");
	}
}