#include<stdio.h>
main()
{
	int i=0,j=0,k=0;
	char moji1[],moji2[],moji3[];
	printf("������1�����:");
	scanf("%s", moji1);
	printf("������2�����:");
	scanf("%s", moji2);
	printf("\nmoji1 = %s\tmoji2 = %s", moji1, moji2);
	printf("\n����ւ����\n");
	do {
		i++;
	} while (moji1[i] != '\0');
	do {
		j++;
	} while (moji2[j] != '\0');
	if (j < i) {
		while (k <= i) {
			moji3[k] = moji1[k];
			moji1[k] = moji2[k];
			moji2[k] = moji3[k];
			k++;
		}
	}
	else {
		while (k <= j) {
			moji3[k] = moji1[k];
			moji1[k] = moji2[k];
			moji2[k] = moji3[k];
			k++;
		}
	}
	printf("moji1 = %s\tmoji2 = %s", moji1, moji2);
}