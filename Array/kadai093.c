#include<stdio.h>
main()
{
	int c[10],i;
	int a[] = { 10,20,30,40,50,60,70,80,90,100 }, b[] = {100,200,300,400,500,600,700,800,900,1000};
	printf("”z—ña‚Æ”z—ñb‚Ì‰ÁŽZŒ‹‰Ê‚ð”z—ñc‚ÉŠi”[‚·‚é\n");
	printf("”z—ña =");
	for (i = 0;i < 10;i++) {
		printf("%d ", a[i]);
		c[i] = a[i]+ b[i];
	}
	printf("\n”z—ñb =");
	for (i = 0;i < 10;i++) {
		printf("%d ", b[i]);
	}
	printf("\n”z—ñc =");
	for (i = 0;i < 10;i++) {
		printf("%d ", c[i]);
	}
}