#include<stdio.h>
main() {
	for(int i = 32;i <= '~';i++) {
		printf("%x %c ",i,i);
		if (i % 10 == 1) {
			printf("\n");
		}
	}
}