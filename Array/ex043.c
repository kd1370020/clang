#include<stdio.h>
main()
{
	int i=0;
	char date[7]="orenge";
	printf("������:%s\n",&date[0]);
	while (date[i] != '\0') {
		i++;
	}
	printf("��������%d����", i);
}