#include<stdio.h>
int strcnt(char* p);
main() {
	char buf[256];
	printf("•¶š—ñ?:");
	scanf("%s", &buf);
	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Ì•¶š”‚Í%d‚Å‚·B", strcnt(buf));
}

int strcnt(char* p) {
	int cnt;
	for (cnt = 0;*p != '\0';cnt++,p++) {
	}
	return(cnt);
}