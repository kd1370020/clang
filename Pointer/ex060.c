#include<stdio.h>
main() {
	int i = 0,j =0;
	char date[] = " Language", cha;
	char* p_d;
	p_d = date;
	printf("date[ ] = %s\n",p_d);
	printf("検索文字は？");
	scanf("%c", &cha);
	printf("検索結果は?");
	while (*(p_d + i) != '\0')
	{
		if (cha == *(p_d +i)) {
			printf(" %d ", i );
			j++;
		}
		i++;
	}
	if (j > 0) {
		printf("文字目です");
	}
	else {
		printf("見つかりません");
	}
}