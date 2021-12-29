#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a[100];
	float s=0,min=0;
	printf("so phan tu cua day: ");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
    {
    	printf("a[%d]=",i);
    	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;++i)
	{
		s += a[i];
	}
		printf("tbc day= %f",s/n);
	}
	
