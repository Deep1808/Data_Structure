#include <stdio.h>

int push(int [],int *,int ,int);
int pop(int [],int *);

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
int p=pop(s,&top);
if(p!=0)
	printf("\n%d",p);
else
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

int pop(int a[],int *t)
{
	if(*t==0)
		{
		printf("\nStack UNDERFLOW !!");
		return 0;
		}
	else
		{
		*t=*t-1;
		return a[*t+1];
		}
}

