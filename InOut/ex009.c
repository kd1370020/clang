#include<stdio.h>
main()
{
	float date1 = 3.5, date2 = 7.5, sum = 0;
	int i;
	float date[2] = { date1,date2 };
	for (i = 0;i < 2;i++){
		sum += date[i];
	};
	 float average = (float)sum / 2;
	printf("•½‹Ï‚Í%.3f\n",average);
}