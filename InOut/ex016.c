#include<stdio.h>
main()
{
	float a;
	printf("実数を入れて :");
	scanf("%f", &a);
	printf("２倍すると%.2f\n３倍すると%.2f", a * 2, a * 3);
}