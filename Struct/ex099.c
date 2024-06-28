#include<stdio.h>
#include<string.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main() {
	struct ken	ken_data[] = {
	{1,"–kŠC“¹",NULL},
	{2,"ÂXŒ§",NULL},
	{3,"ŠâŽèŒ§",NULL},
	{4,"‹{éŒ§",NULL},
	{5,"H“cŒ§",NULL},
	{6,"ŽRŒ`Œ§",NULL},
	{7,"•Ÿ“‡Œ§",NULL},
	{DATA_END,"",NULL}
	};
	struct ken* p, * wp;
	struct ken hyogo_data[] = { 28,"•ºŒÉŒ§",NULL };

	//ƒŠƒ“ƒN‚ÌÝ’è
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//ƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = ken_data;p->code != DATA_END;p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
	//‘}“ü
	ken_data[0].next = hyogo_data;
	hyogo_data->next = &ken_data[1];

	printf("\n-------------------------\n");
	//ƒf[ƒ^‘}“üŒãƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = ken_data;p->code != DATA_END;p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
	//íœ
	ken_data[1].next = &ken_data[3];
	ken_data[4].next = &ken_data[6];
	printf("\n-------------------------\n");
	//ƒf[ƒ^íœŒã
	for (p = ken_data;p->code != DATA_END;p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);;
	}
}