#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i = 0,atari,su = 0;
	srand(time(0));
	rand();
	atari = rand() % 1000 + 1;
	while(su != atari) {
		printf("\n‚ ‚½‚è‚Ì”‚ÍH->");
		scanf("%d", &su);
		i++;
		if (su == atari) {
			break;
		}
		if (su < atari) {
			printf("‚ ‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·");
		}
		else {
			printf("‚ ‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·");
		}
	};
	printf("³‰ð%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½",i);
}