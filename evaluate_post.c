#include<stdio.h>
#include"stack.h"

void main()
{	
	int top=0,top1=0;n;
	printf("Enter Expression:");
	scanf("%s",ep);
	n=strlen(ep);
	int p=ep;
	while(*p != '\0'){
		if(isalmun(*p)){
			*p=*p-'\0';
			push(s,&top,*p,n);
		}
		else if(*p == '/' || *p == '*' || *p == '-' || *p == '^'){
			n1=pop(s,&top)
			n1-='0';
			n2=pop(s,&top);
			n2-='0';
			switch(*p){
				case '+':{
					n3=n1+n2;
					break;
					}
				
				case '-':{
					n3=n2-n1;
					break;
					}
				case '*':{
					n3=n2*n1;
					break;
					}
				case '/':{
					n3=n2/n1;
					break;					
					}
				}
			n3+='0';
			push(s,&top,n3,n)
		}
		p++;
	}
	printf("\nThe result :%d",pop(s,&top));;
}
