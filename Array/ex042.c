#include<stdio.h>
main()
{
	int i;
	char date[6] = "Apple";
	printf("1�������\��\n");
	for (i = 0;date[i] != '\0';i++) {
		printf("%c\n", date[i]);
	}
		//printf("\n������ŕ\��\n%s", &date[0]);//%s�̎��̓A�h���X���w��
		printf("\n������ŕ\��\n%s", date);//�z�񖼂̂ݏ����Ɛ擪�A�h���X��\��
}