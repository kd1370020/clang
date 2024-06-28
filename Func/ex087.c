#include<stdio.h>
#include<stdlib.h>
main(int ab,char * argv[]) {
	if (ab == 3) {
		printf("%d + %d = %d\n", atoi(argv[1]), atoi(argv[2]), atoi(argv[1]) + atoi(argv[2]));
	}
	else {
		printf("error");
	}
}