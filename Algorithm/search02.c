#include<stdio.h>
main() {
	int s = 55, i;
	int d[11] = {10,5,30,77,16,3,47,29,37,33};
	for (i = 0;i < 10;i++) {
		printf("%d ", d[i]);
	}
	printf("\n’Tõ’l‚ð“ü—Í");
	scanf("%d", &s);
	d[11] = s;
	for (i = 0;s!=d[i];i++) {}
	if (i >= 11) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("%d”Ô–Ú", i);
	}
}