#include<stdio.h>
main() {
	int i,j;
	printf("®”‚PH");
	scanf("%d", &i);
	printf("®”‚QH");
	scanf("%d", &j);
	if (i<j) {
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢",j,i,j-i);
	}
	else if(i >j) {
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢", i, j, i - j);
	}
	else {
		printf("%d‚Æ%d‚Í“™‚µ‚¢", j, i);
	}
}