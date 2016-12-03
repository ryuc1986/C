#include <stdio.h>

int main(void)
{
	int num;	
	
	printf("Please input Integer: ");	scanf("%d", &num);
	
	if (num >=1){
		
		int i = 2;
		while(i <= num){
			printf("%d\n",i);
			i += 2;
		}
	}
	return 0;
}

