#include<stdio.h>
#include<math.h>
int main()
{
	int n,i, a[100],d=0;
	float s=1;
	printf("so phan tu cua day:");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			s=s*a[i];
			d++;
		}
	}
	if(d==0)
		printf("day khong co so duong");
	else
		printf("tbn cac so duong la= %f", pow(s,1.0/d));
}
