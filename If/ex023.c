#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("•b”‚ð“ü—Í;");
	scanf("%d", &a);
	if (a > 5000) {
		printf("error");
	}
	else {
		b = a / 3600;
		c = (a - b*3600) / 60;
		d = a - b *3600 - c * 60;
		printf("%dŽžŠÔ%d•ª%d•b", b, c, d);
	}
}