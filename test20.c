#include <stdio.h>

int main(void)
{
	int no,temp,digits;
	
	printf("Please input Ingteger: ");
	scanf("%d",&no);
	
	temp=no;
	digits=0;
	
	while(temp > 0) {
		temp /= 10;
		digits++;
	}
	
	printf("%d is %dketa\n",no,digits);
	
	return 0;
}
