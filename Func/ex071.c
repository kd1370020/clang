#include<stdio.h>
gokei(int a, int b, int c);
heikin(int a);

main() {
	int a, b, c, sum;
	float heikin1;
	printf("�������R���� :");
	scanf("%d %d %d", &a, &b, &c);
	sum = gokei(a, b, c);
	heikin1 = heikin(sum);
	printf("���v��%d�A���ς�%.2f", sum, heikin1);
}

gokei(int a, int b, int c) {

	return a + b + c;
}

heikin(int a) {
	float ans;
	ans = a  / 3;
	return(ans);
}