#include<stdio.h>
main() {
	printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\n============================================================================\n");
	for(int j=0,i = 1;i <= 9;i++) {
		printf("%d |",i);
		for (j = 1; j <= 9;j++) {
			printf("\t%d",i * j);
		}
		printf("\n");
	}
}