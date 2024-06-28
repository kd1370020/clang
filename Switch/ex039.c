#include<stdio.h>
main()
{
	int a, b, c,max=0,min=999;
	char i;
	printf("ˆ—‚ğ“ü—Í:");
	scanf("%c", &i);
	printf("\n®”‚ğ“ü—Í:");
	scanf("%d %d %d", &a, &b, &c);
	if (i < a) {
		i += 32;
	}
	if (max < a) { max = a; }
	if (max < b) { max = b; }
	if (max < c) { max = c; }
	if (min > a) { min = a; }
	if (min > b) { min = b; }
	if (min > c) { min = c; }
	switch (i)
	{
	case 'd':printf("Å‘å’l‚Í%d‚Å‚·",max);
		break;
	case 's':printf("Å¬’l‚Í%d‚Å‚·",min);
		break;
	case 'g':printf("‡Œv‚Í%d‚Å‚·",a+b+c);
		break;
	case 'h':printf("•½‹Ï‚Í%f‚Å‚·",(a+b+c)/3.0);
		break;
	default:printf("error");
	}
}