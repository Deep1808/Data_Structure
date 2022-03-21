#include<stdio.h>
#include<string.h>

int flag=0;

int enqueue(int q[],int *f,int *r,int n,int ele)
{
	if(flag == 0){
		*f=0;		
		*r=0;
		flag=1;
		}
		if(*r>=n){

			printf("Queue Overflow\n");
			return 0;
		}
		else{
			*r=*r+1;
			*f=1;
			q[*r]=ele;
			return q[*r];
		}
}

int dequeue(int q[],int *f,int *r)
{
	int y;
	if(*f == 0){
		printf("Queue Underflow\n");
		return 0;
	}
	else{
		y=q[*f];
		if(*f == *r){
			*f=0;
			*r=0;
		}
		else{
			*f=*f-1;
			return y;
		}
	}
}

void main()
{
	int f=0,r=0;
	int choice,ele,n=2;
	int q[n];
	

while(1)
{
	printf("\n Queue using array");
	printf("\n\t 1. For Enqueue");
	printf("\n\t 2.For Dequeue");
	printf("\nEnter ur choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("\n Enter the element:");
		scanf("%d",&ele);
		enqueue(q,&f,&r,n,ele);
		break;
		
		case 2:
		dequeue(q,&f,&r);
		break;

		default :
		printf("\n End of run");
		exit(0);
		break;
	}
}
}
