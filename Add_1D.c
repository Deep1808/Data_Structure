#include<stdio.h>

void main()
{
	int ba,n;
	printf("Enter Base Address:");
	scanf("%d",&ba);
	printf("\nEnter index of element whose address you want to find:");
	scanf("%d",&n);

	int add;
	add=ba + ((n-1)*4); 
	printf("\nAddress of element of index A[%d] = %d",n,add);

}

