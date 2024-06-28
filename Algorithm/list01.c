#include<stdio.h>
#include<atdlib.h>
#include<string.h>
#define DATA_END -1

typedef struct NODE {
	int id;
	char name[20];
	struct NODE* pnext;
}NODE;

NODE head = { 0,"HEAD",NULL };

void show(void);
void append(int id, char* name)
void allfree(void);

main(void) {
	append(8, "White");
	append(1, "Black");
	append(33, "Pink");
	show();

	allfree();
}

void show(void) {
	NODE p1;
	printf("\n------------------------------------------------\n");
	p1 = &head;
	while (p1 != NULL) {
		printf("アドレスは%p IDは%-5d 名前は%-10s NEXTは%p\n",
			p1, p1->id, p1->name, p1->pnext);
		p1 = p1->pnext;
	}
	return;
}

void append(int id, char* name) {
	NODE* pnew, * p1;

	pnew = (NODE*)malloc(/**/);
	if (!pnew) {
		printf("MemoryError\n");
		return;
	}
	/**/ = id;
	strcpy(/**/, name);
	pnew->pnext = /**/;

	p1 = &head;
	while (p1->pnext != NULL) {
		p1 = p1->pnext;
	}
	p1->pnext = /**/;
	return;
}

void allfree(void) {
	NODE* p1, * psave;

	p1 = head.pnext;
	while (p1 != NULL) {
		/**/;
		/**/;
		/**/;
	}
	return;
}