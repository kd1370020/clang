#include<stdio.h>
main()
{
	int i=0,j=0,k=0;
	char moji1[],moji2[],moji3[];
	printf("文字列1を入力:");
	scanf("%s", moji1);
	printf("文字列2を入力:");
	scanf("%s", moji2);
	printf("\nmoji1 = %s\tmoji2 = %s", moji1, moji2);
	printf("\n入れ替えると\n");
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