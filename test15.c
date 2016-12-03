#include <stdio.h>

int main(void)
{
	int no;
	
	printf("Please input Integer: ");	scanf("%d", &no);
	
	if (no >= 1){
		int i = 1;
		printf("{");
		while( i < no) {
			printf("%d,", i++);
		}
		printf("%d}\n");
	}
	
	return 0;
}
