#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un ,i;
	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	for (i = 0;i != un;i++) {
		printf("�� ");
	};
}