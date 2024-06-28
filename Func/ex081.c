#include<stdio.h>
maxshori(int date[]);
minshori(int date[]);
#define SIZE 8
main()
{
	int date[SIZE] = {6,10,8,2,9,5,1,7},max,min;
	max = maxshori(date);
	min = minshori(date);
	printf("ç≈ëÂíl = %d\nç≈è¨íl = %d", max, min);
}

maxshori(int date[]) {
	int max = -999;
	for (int i = 0;i < SIZE;i++) {
		if (max < date[i]) {
			max = date[i];
		}
	}
	return(max);
}

minshori(int date[]) {
	int min = 999;
	for (int i = 0;i < SIZE;i++) {
		if (min > date[i]) {
			min = date[i];
		}
	}
	return(min);
}