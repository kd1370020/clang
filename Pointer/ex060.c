#include<stdio.h>
main() {
	int i = 0,j =0;
	char date[] = " Language", cha;
	char* p_d;
	p_d = date;
	printf("date[ ] = %s\n",p_d);
	printf("���������́H");
	scanf("%c", &cha);
	printf("�������ʂ�?");
	while (*(p_d + i) != '\0')
	{
		if (cha == *(p_d +i)) {
			printf(" %d ", i );
			j++;
		}
		i++;
	}
	if (j > 0) {
		printf("�����ڂł�");
	}
	else {
		printf("������܂���");
	}
}