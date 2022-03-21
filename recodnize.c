#include<stdio.h>

int push(char [],int *,char c,int n)

void main()
{
	int y,z,d,top=0;
	int n=10;
	char a[11];
	printf("Enter string:");
	scanf("%s",a);		
	for(int i=0;i<10;i++)	
	{	
	while(a[i] != 'b'){
				y=push(a[11],&top,a[i],n);
			   }
	while(a[i] != 'b'){
				z++;
			   }
	printf("%d",z);
	if(y==z)
	{
		printf("Number of a == Number of b");
	}else{
		printf("Number of A not equals to b");
	}
	}
}
		
int push(char a[], int *t, char e,int n)
{
	if (*t<n)
		{
		*t=*t+1;
		a[*t]=e;
		printf("top is %d\n",*t);
		return *t;
		}
	else
		{
		printf("stack overflow");
		return 0;
		}
}		
				
			
