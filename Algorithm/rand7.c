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
		printf("\n������̐��́H->");
		scanf("%d", &su);
		i++;
		if (su == atari) {
			break;
		}
		if (su < atari) {
			printf("������̐���菬�����ł�");
		}
		else {
			printf("������̐����傫���ł�");
		}
	};
	printf("����%d��ڂœ�����܂���",i);
}