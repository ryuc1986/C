#include <stdio.h>

int main(void)
{
	int i=1000;
	FILE *fp;
	
	fp=fopen("/root/git/C/system.c","r");
	fprintf(fp,"%d\n",i);
	fclose(fp);

	return 0;
}

