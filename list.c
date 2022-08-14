#include <stdio.h>
#define maxsize 10
int list[maxsize],n;
void create(){
	int i;
	printf("\n enter element: \t");
	scanf("%d",&n);
	printf("\n enter element ");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&list[i]);
	}
	
}
void main(){
	create();
}
