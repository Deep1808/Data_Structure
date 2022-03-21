#include<stdio.h>
#include<string.h>

int flag=0;
int cenqueue(int q[],int *f,int *r,int n,int ele){
	
	if(*r == n){
		*r=1;
	}
	else{
		*r=*r+1;
	}
	
	if(*f == *r){
		printf("OVERFLOW");
		return 0;
	}
	else{
		if(*f == 0)
			*f=1;
		q[*r]=ele;
		return q[*r];
	}
}

int cdequeue(int q[],int *f,int *r){
	int y;
	if(*f == 0){
		printf("UNDERFLOW");
		return 0;
	}
	else{
		y=q[*f];
		if(*f == *r){
			*f=0;
			*r=0;
		}
		else{
			*f=*f+1;
		}
		return y;
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
	printf("\n\t 1. For Circular Enqueue");
	printf("\n\t 2.For Circular Dequeue");
	printf("\nEnter ur choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("\n Enter the element:");
		scanf("%d",&ele);
		cenqueue(q,&f,&r,n,ele);
		break;
		
		case 2:
		cdequeue(q,&f,&r);
		break;

		default :
		printf("\n End of run");
		exit(0);
		break;
	}
}
}

