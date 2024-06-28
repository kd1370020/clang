#include<stdio.h>
main()
{
	int num = 0, i = 0,j;
	printf("”‚Í?");
	scanf("%d", &num);
	do {
		j= 0;
		do {
			printf(" ");
			j++;
		} while (j < num-i);
		j= 0;
			do {
				printf("*");
				j++;
			} while (j < i+1);
		printf("\n");
		i++;
	} while (i < num);
}
//‚­‚Ÿ‚—‚¹‚„‚’‚†‚”‚‡‚™‚Ó‚¶‚±‚Œ‚