#include<stdio.h>
main()
{
	int s, b, c;
	printf("�b�������;");
	scanf("%d", &s);
	if (s > 5000) {
		printf("error");
	}
	else
	{
		if (s < 0) {
			printf("�}�C�i�X�̓G���[�ł�");
		}
		else {
			b = s / 3600;
			s = s % 3600;
			c = s / 60;
			s = s % 60;
			printf("%d����%d��%d�b", b, c, s);
		}
	}
}