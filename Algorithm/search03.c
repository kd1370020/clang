#include<stdio.h>
main() 
{
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int s,high = 10,low = 0,mid,i;
	for (i = 0;i < 11;i++) {
		printf("%d ", d[i]);
	}
	printf("\n’Tõ’l‚ð“ü—Í:");
	scanf("%d", &s);
	while (low <= high) 
	{
		mid = (low + high) / 2;
		if (s == d[mid]) break;
		if(s > d[mid]){
			low = mid + 1;
		}
		if (s < d[mid]) {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("%d", mid);
	}
	/*do {
		mid = (low + high) / 2;
		if (mid < low || mid > high)break;
		if (s < d[mid]) {
			high = mid - 1;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
	} while (s != d[mid]);
	if (mid < low || mid > high) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("%d", mid);
	}*/
}
