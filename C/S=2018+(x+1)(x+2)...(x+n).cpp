#include<stdio.h>
#include<math.h>
int main()
{
	float x,s;
	int n,i;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	printf("nhap so thuc x: ");
	scanf("%f",&x);
	s=1;
	for(i=1;i<=n;++i)
	s = s*(x+i);
	printf("ket qua=%f",2018+s);	
}
