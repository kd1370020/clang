#include<stdio.h>
main(int argc, char* a[]) {
	printf("argc = %d\n", argc);
	printf("*argv[0] = %s\n", a[0]);
	printf("*argv[1] = %s\n", a[1]);
	printf("*argv[2] = %s\n", a[2]);
}