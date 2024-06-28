#include<stdio.h>
main()
{
	int i;
	char date[6] = "Apple";
	printf("1文字ずつ表示\n");
	for (i = 0;date[i] != '\0';i++) {
		printf("%c\n", date[i]);
	}
		//printf("\n文字列で表示\n%s", &date[0]);//%sの時はアドレスを指定
		printf("\n文字列で表示\n%s", date);//配列名のみ書くと先頭アドレスを表す
}