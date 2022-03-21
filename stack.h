int push(char a[], int *t, char e,int n)
{
	if (*t<n)
		{
		*t=*t+1;
		a[*t]=e;
		printf("top is %d\n",*t);
		return 1;
		}
	else
		{
		printf("stack overflow");
		return 0;
		}
}

char pop(char a[], int *t)
{
	if(*t==0)
		{
		printf("stack underflow\n");
		return '0';
		}
	else
		{
		*t=*t-1;
		return a[*t+1];
		}

}


char peep(char a[],int *t, int i)
{
if(*t-i+1<=0)
{
	printf("stack underflow\n");
	return '0';
}
else
	return a[*t-i+1];
}

char change(char a[], int *t, int i, char x)
{
if(*t-i+1<=0)
{
	printf("stack underflow\n");
	return '0';
}
else
	a[*t-i+1]=x;
	return a[*t-i+1];
}
