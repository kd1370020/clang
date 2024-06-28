#include<stdio.h>
main() {
	char c;
	printf("アルファベット？");
	scanf("%c", &c);
	switch (c)
	{
	case 'a': printf("America\nAustralia");
		break;
	case 'e': printf("England");
		break;
	case 'f': printf("France");
		break;
	case 'j': printf("Japan");
		break;
	}
}