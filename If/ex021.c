#include<stdio.h>
main()
{
	int no;
	printf("���������;");
	scanf("%d", &no);
	if (no < 0) {
		printf("���͒l�̓}�C�i�X�ł�\n");
	}
	else {
		if (no == 0) {
			printf("���͒l��0�ł�\n");
		}
		else {
			printf("���͒l�̓v���X�ł�\n");
		}
		}
}