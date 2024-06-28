#include<stdio.h>
main() {
	char* p_ride[3] = { "car","bus","shinkansen" }, * p;
	for (int i = 0;i < 3;i++) {
		p = p_ride[i];
		while (*p) {
			putchar(*p++);
		}
		printf("\n");
	}	
}