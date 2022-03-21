#include<stdio.h>

void main()
{
	int ba,r,c,i,j,m;
	printf("Enter Base Address:");
	scanf("%d",&ba);

	printf("\nEnter number of ROWS and COLUMNS of matrix:");
	scanf("%d %d",&r,&c);

	printf("\nEnter index of element whose address you want to find:");
	scanf("%d%d",&i,&j);

	printf("Matrix is row major(1) or column major(0):");
	scanf("%d",&m);

	int add;
	if(m)
		add = ba + ((i-1)*c + (j-1))*4;
	else
		add = ba + ((i-1)*c + (j-1))*4;

	printf("\nAddress of element of index [%d][%d] = %d",i,j,add);
}
