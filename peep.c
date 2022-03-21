#include <stdio.h>

int push(int [],int *,int ,int);
int peep(int [],int *);
int change(int [],int *);

void main()
{
int x,n=3;
int s[n],top=0;
while(1)
{
	
	printf("\nEnter element to push:");
	scanf("%d",&x);
	if(push(s,&top,x,n)==0)
		break;
	else
		printf("\nElement PUSH !!");
}

while(1)
{
int p=peep(s,&top);
if(p!=0)
	printf("\n%d",p);
else
	printf("\nOutside limit of STACK !!");
	break;
}

while(1)
{

int p=change(s,&top);
if(p!=0)
	printf("\n%d",p);
else
	printf("Outside limit of STACK");
		break;

}
}

int push(int a[],int *t,int e,int n)
{
	if(*t<n)
		{
		*t=*t+1;
		a[*t]=e;
		return 1;
		}
	else
		{
		printf("\nStack OVERFLOW");
		return 0;
		}
}

int peep(int a[],int *t)
{
	int i;
	printf("\nEnter number of Element  from top you want to see :");
	scanf("%d",&i);

	if((*t-i+1)>=0)
		return a[(*t-i+1)];
	else
		return 0;
}	

int change(int a[],int *t)
{	
	int i,x,p;
	printf("\nEnter element from top and its new value you want to change:");
	scanf("%d %d",&i,&x);
	
	if((*t-i+1)>=0){
		a[(*t-i+1)]=x;
		return a[(*t-i+1)];
			}
	else{ 	
		return 0;
	    }	
}
	
	
