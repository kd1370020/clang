#include <stdio.h>
main()
{
	int c;
	char dumy[256];
	char date,date2;
	c = scanf("%c %c", &date,&date2);
	while (c != EOF) {
		printf("%d",c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c %c", &date,&date2);
	}	
	printf("%d\n", printf("HELLO"));
	printf("%d\n", printf("‚±‚ñ‚É‚¿‚Í"));
}