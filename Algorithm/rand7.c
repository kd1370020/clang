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
		printf("\nあたりの数は？->");
		scanf("%d", &su);
		i++;
		if (su == atari) {
			break;
		}
		if (su < atari) {
			printf("あたりの数より小さいです");
		}
		else {
			printf("あたりの数より大きいです");
		}
	};
	printf("正解%d回目で当たりました",i);
}