#include<stdio.h>
#include<stdlib.h>

struct tree
{
	struct tree *lptr;
	char data;
	struct tree *rptr;
};

void pre(struct tree *);
void inorder(struct tree *);
void post(struct tree *);

int main()
{
	struct tree *a,*b,*c,*d,*e,*f,*g,*t;

	a=(struct tree *)malloc(sizeof(struct tree));
	b=(struct tree *)malloc(sizeof(struct tree));
	c=(struct tree *)malloc(sizeof(struct tree));
	d=(struct tree *)malloc(sizeof(struct tree));
	e=(struct tree *)malloc(sizeof(struct tree));
	f=(struct tree *)malloc(sizeof(struct tree));
	g=(struct tree *)malloc(sizeof(struct tree));

	
	t=a;

	a->data='A';
	a->lptr=b;
	a->rptr=d;

	b->data='B';
	b->lptr=c;
	b->rptr=NULL;
	
	c->data='C';
	c->lptr=NULL;
	c->rptr=NULL;

	d->data='D';
	d->lptr=e;
	d->rptr=f;

	e->data='E';
	e->lptr=NULL;
	e->rptr=NULL;

	f->data='F';
	f->lptr=g;
	f->rptr=NULL;

	g->data='G';
	g->lptr=NULL;
	g->rptr=NULL;
	
	printf("PREORDER \n");
	pre(t);	
	printf("\nINorder\n");
	inorder(t);
	printf("\nPOST\n");
	post(t);

}

void pre(struct tree *t)
{

if(t==NULL)
	printf("Empty");
else
	{
	printf("%c ",t->data);
	if(t->lptr != NULL)
		{
		pre(t->lptr);
		}
	if(t->rptr != NULL)
		{
		pre(t->rptr);
		}
	}
}

void post(struct tree *t)
{
if(t == NULL)
	printf("Empty");
else	{
	if(t->lptr != NULL)
	{
		post(t->lptr);
	}
	if(t->rptr != NULL)
	{
		post(t->rptr);
	}
	printf("%c ",t->data);
}
}

void inorder(struct tree *t)
{
if(t==NULL)
	printf("Empty");
else 	{
	if(t->lptr != NULL)
	{
		inorder(t->lptr);	
	}
	printf("%c ",t->data);
	if(t->rptr != NULL)
		{
		inorder(t->rptr);
		}
	}
}
