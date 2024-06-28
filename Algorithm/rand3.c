#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kogeki;
	srand(time(0));
	rand();
	kogeki = rand() % 100 + 1;
	if (kogeki <= 30) {
		printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«\n");
	}
	else {
		printf("’ÊíUŒ‚");
	}
}