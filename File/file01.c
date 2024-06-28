#include<stdio.h>
main() {
	FILE* fp;
	int a = 10, b = 20;
	fp = fopen("file01.txt", "w");
	fprintf(fp, "カラドボルグⅡ\n");
	fprintf(fp, "干将 莫邪\n");
	fprintf(fp, "1 10 銅の剣\n");
	fclose(fp);
}