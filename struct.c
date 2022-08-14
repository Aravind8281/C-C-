#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	scanf("%d",&num);
	switch(num)
	{
		default:
			printf("default");
			break;
			
		case 1:
			printf("hi");
			break;
		case 2:
			printf("hwllo");
			break;
	}
	return 0;
	getch();
}
