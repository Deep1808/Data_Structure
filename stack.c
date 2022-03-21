#include<stdio.h>
#include "stack.h"

void main()
{
int n=3;
int s[n+1],top=0;
int x;
int op=0;
int i;
printf("welcome to stack operations\n");

while(op<5)
{	
	
	printf("1.Push\n 2. Pop \n 3. Peep\n 4.Chnage \n 5. Quit");
	scanf("%d",&op);
	switch(op)
	{
	case 1:
	printf("enter element to push\n");
	scanf("\n%c",&x);
	push(s,&top,x,n);
	break;
	
	case 2:
	printf("element at top of stack is %c\n",pop(s,&top));
	break;
	
	case 3:
	printf("enter position\n");
	scanf("%d",&i);
	printf("Element at %d position is %c\n", i, peep(s,&top,i));
	break;
	
	case 4:
	printf("enter position and value to be updated\n");
	scanf("%d %c", &i, &x);
	change(s,&top,i,x);
	break;
	
	case 5:
	printf("Thank you\n");
	break;
	
	default:
	break;
	}
}
}

