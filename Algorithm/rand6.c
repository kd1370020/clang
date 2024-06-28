#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p, c;
	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)>");
	scanf("%d", &p);
	srand(time(0));
	rand();
	c = rand() % 3;
	switch(p){
	case 1:printf("プレイヤーは、グーです\n");
		break;
	case 2:printf("プレイヤーは、チョキです\n");
		break;
	case 3:printf("プレイヤーは、パーです\n");
		break;
	default: printf("1～3を入力してください\n");
	};
	switch (c) {
	case 0:printf("コンピュータ、はグーです\n");
		break;
	case 1:printf("コンピュータは、チョキです\n");
		break;
	case 2:printf("コンピュータは、パーです\n");
		break;
	}
	switch (((p-1) - c+ 3)%3) 
	{
	case 0:printf("あいこです\n");
		break;
	case 1:printf("コンピュータの勝ちです\n");
		break;
	case 2:printf("プレイヤーの勝ちです\n");
		break;
	}
}