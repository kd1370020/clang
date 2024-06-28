#include<stdio.h>
main()
{
	int i;
	float sum, box[3];
	printf("À”‚ğ“ü—Í:");
	scanf("%f", &box[0]);
	printf("À”‚ğ“ü—Í:");
	scanf("%f", &box[1]);
	printf("À”‚ğ“ü—Í:");
	scanf("%f", &box[2]);
	for (i = 0,sum=0;i <= 2;i++) {
		sum += box[i];
	}
	printf("‡Œv‚Í%.1f‚Å‚·\n•½‹Ï‚Í%.1f‚Å‚·", sum,sum/3);
}