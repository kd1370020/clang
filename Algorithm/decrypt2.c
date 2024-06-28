#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	char s[20];
	int i, k[20];
	srand(time(0));
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf("%s", &s);
	for (i = 0;s[i] != '\0';i++) {
		printf("s[%d]•œŒ³‰»ƒL[>", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s\n", s);
}