#include<stdio.h>
main()
{
	int i;
	float sum, box[3];
	printf("���������:");
	scanf("%f", &box[0]);
	printf("���������:");
	scanf("%f", &box[1]);
	printf("���������:");
	scanf("%f", &box[2]);
	for (i = 0,sum=0;i <= 2;i++) {
		sum += box[i];
	}
	printf("���v��%.1f�ł�\n���ς�%.1f�ł�", sum,sum/3);
}