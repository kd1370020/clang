#include<stdio.h>
main() {
	int s = 47, i;
	int d[10] = {10,5,30,77,16,3,47,29,37,33};
	for (i = 0;i < 10;i++) {
		if (s == d[i]) break;
	}
	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("%d”Ô–Ú", i);
	}
}