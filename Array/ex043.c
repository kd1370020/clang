#include<stdio.h>
main()
{
	int i=0;
	char date[7]="orenge";
	printf("•¶š—ñ:%s\n",&date[0]);
	while (date[i] != '\0') {
		i++;
	}
	printf("•¶š”‚Í%d•¶š", i);
}