#include<stdio.h>
main()
{
	double ia, ib;
	printf("�Q�̐��l?");
	scanf("%lf %lf", &ia, &ib);
	printf("������ %f �� %f �̎l�����Z������\n�a = %f �� = %f �� = %f �� = %f",ia,ib,ia + ib,ia - ib,ia * ib,ia / ib);
}