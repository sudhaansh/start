#include<stdio.h>
int small(int*, int*, int*);
int high(int*, int*, int*);
int main ()
{int a=10, b=20, c=30, *p, *q, *r;
p=&a; q=&b, r=&c;
small(&a,&b,&c);
high(&a,&b,&c);
return 0;


}
int small(int *p, int *q, int *r)
{ int a, b, c;
	a=*p; b=*q, c=*r;
	if(a<b)
		{
		if(a<c) printf("\na is smallest");
		else printf("\nc is smallest");
	}
	else
	{
	if(b<c) printf("\nb is smallest");
	     else printf("\nc is smallest");
		}

	return 0;
}
int high(int *p, int *q, int *r)
{ int a, b, c;
	a=*p; b=*q, c=*r;
	if(a>b)
		{
		if(a>c) printf("\na is highest");
		else printf("\nc is highest");
	}
	else
	{
	if(b>c) printf("\nb is highest");
	     else printf("\nc is highest");
		}

	return 0;
}
