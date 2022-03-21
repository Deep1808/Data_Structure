#include<stdio.h>
#include<stdlib.h>


int flag=0;

int enqueue_rear(int q[],int *f,int *r,int n,int ele)
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

int dequeue_front(int q[],int *f,int *r)
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

int enqueue_front(int q[],int *f,int *r,int n,int ele)
{
	if(*f == 0){		
		printf("Queue is EMPTY");
		return 0;
	}else if(*f == 1){
		printf("Overflow");
		return 0;
	}else{
		*f=*f-1;
		q[*f]=ele;
		return q[*f];
	}
}

int dequeue_rear(int q[],int *f,int *r)
{
	int y;
	if(*r == 0){
		printf("Queue Underflow\n");
		return 0;
	}
	else{
		y=q[*r];
		if(*f == *r){
			*f=0;
			*r=0;
		}
		else{
			*r=*r-1;
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
	printf("\n\t 1. For Enqueue from REAR");
	printf("\n\t 2.For Dequeue from FRONT");
	printf("\n\t 3. For Enqueue from FRONT");
	printf("\n\t 4.For Dequeue from REAR");
	
	printf("\nEnter ur choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("\n Enter the element:");
		scanf("%d",&ele);
		enqueue_rear(q,&f,&r,n,ele);
		break;
		
		case 2:
		dequeue_front(q,&f,&r);
		break;

		case 3:
		printf("\n Enter the element:");
		scanf("%d",&ele);
		enqueue_front(q,&f,&r,n,ele);
		break;
		
		case 4:
		dequeue_rear(q,&f,&r);
		break;
		

		default :
		printf("\n End of run");
		exit(0);
		break;
	}
}
}

