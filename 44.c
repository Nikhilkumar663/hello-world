#include<stdio.h>
int nik(int);
int main()
{
	int a,b;
	scanf("%d",&a);
	b=nik(a);
	print(b);
}
int nik(int x)
{
	int e;
	if(x==1)
	return(1);
	else
	{
		e=x*nik(x-1);
	}
	return(e);
}
