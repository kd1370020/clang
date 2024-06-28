#include<stdio.h>
main() {
	int i = 21;
	while (i-- > 1) {
		printf("\t%d", i);
		if (i % 10 == 1) {
			printf("\n");
		}
	}
}