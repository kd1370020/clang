#include<stdio.h>
main() {
	int i = 0,j =0;
	char date[] = " Language", cha;
	char* p_d;
	p_d = date;
	printf("date[ ] = %s\n",p_d);
	printf("ŒŸõ•¶Žš‚ÍH");
	scanf("%c", &cha);
	printf("ŒŸõŒ‹‰Ê‚Í?");
	while (*(p_d + i) != '\0')
	{
		if (cha == *(p_d +i)) {
			printf(" %d ", i );
			j++;
		}
		i++;
	}
	if (j > 0) {
		printf("•¶Žš–Ú‚Å‚·");
	}
	else {
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ");
	}
}