#include<stdio.h>
main()
{
	int i=0;
	char date[7]="orenge";
	printf("文字列:%s\n",&date[0]);
	while (date[i] != '\0') {
		i++;
	}
	printf("文字数は%d文字", i);
}