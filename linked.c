#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void print(struct node*n){
	while(n!=NULL){
		printf("%d",n->data);
		n=n->next;
	}
}
int main(){
	struct node*head=NULL;
	struct node*second=NULL;
	struct node*third=NULL;
	struct node*four=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	four=(struct node*)malloc(sizeof(struct node));
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=four;
	four->data=6;
	four->next=NULL;
	print(head);
	return 0;
}
