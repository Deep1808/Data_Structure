#include<stdio.h>
#include"stack.h"

void main()
{
int e,n=10,s[n+1],top=0;
char a[n];
printf("Enter a string \n");
scanf("%s",a);
push(a,&top,e,n);

for(int i=0;i<n;i++)
	{
	while(a[i]!='c')
	{
		push(s,&top,a[i]);
	}
	
	while(a[i]==pop(s,&top));
	if(a[i]==" " && pop(s,&top)=='e')
	printf("Valid String");
	else
	printf("Invalid String");
	}
}
