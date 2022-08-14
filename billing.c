#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
	int q[10],i,j,x;
	float r[10],p[10],t=0;
	char n[10][23];
	printf("\n Welcome to Cafeteria \n");
	for (i=1;i<10;i++){
		
		printf("\n Enter product name \n");
		gets(n[i]);
		printf("\n Enter Quantitiy \n");
		scanf("%d",&q[i]);
		printf("\n Enter Rate : \n");
		scanf("%f",&r[i]);
		p[i]=q[i]*r[i];
		j=i;
		t=t+p[i];
		printf("\n Enter any key to continue \ Enter 0 to make bill:\n");
		scanf("%d",&x);
		if(x==0){
			break;
		}
	}
	printf("\n \t My Cafe point");
	printf("\n \t----------------*********************-----------------");
	printf("\n \t Product \t\t Qty \t rate \t price ");
	for (i=1;i<=j;i++){
		printf("\n\n \t\t %s \t\t %d \t %0.2f \t %0.2f",n[i],q[j],r[j],p[j]);
	}
	printf("\n \t\t Total :- %0.2f",t);
	printf("\n \t ------------------**************----------------------");
	printf("\n Thank You visit again");
	getch();
}
