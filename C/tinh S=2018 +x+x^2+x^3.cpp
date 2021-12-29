#include <stdio.h>
#include <math.h>
int main()
{
	int n,i;
	float x,s;
	printf("nhap so nguyen n= ");
	scanf ("%d",&n);
	printf("nhap so thuc x= ");
	scanf ("%f",&x);
	s=0;
	for (i=1;i<=n;i++)
	s=s+pow(x,i);
	printf("tong s=%f",2018+s);
}

