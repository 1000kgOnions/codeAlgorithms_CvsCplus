#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,gt;
	float s;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	s=0;
	gt=1;
	for(i=1;i<=n;++i)
	{
		gt=gt*i;
		s=s+gt;
	}
	printf("tong=%f",s);
}
