#include <stdio.h>

int main(void)
{
	int month;
	
	printf("What is the month ");
	scanf("%d", &month);
	
	printf("%d is ", month);
	
	switch(month){
		case 3: 
		case 4: 
		case 5: puts("Spring Season"); break;
		case 6:
		case 7:
		case 8: puts("Summer Season"); break;
		case 9:
		case 10: puts("Autum Season"); break;
		case 11:
		case 12:
		case 1:
		case 2: puts("Winnter Season"); break;
		default : puts("Nothing Seasonet"); break;
	}
	
	return 0;
}
