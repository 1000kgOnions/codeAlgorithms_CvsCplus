#include<stdio.h>
int main()
{
	int a[100],b[100],t;
	int n,i,j,d=0;
	printf("nhap phan tu cua day");
	scanf("%d",&n);
	
	for(i=1;i<=n;++i)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			d++;
			b[d]=a[i];
			
		}
	}
	if(d==0)
	printf("day khong co so chan");
	else
	{
		for(i=1;i<=d-1;++i)
		  for(j=i+1;j<=d;++j)
		    if(b[j]>b[i])
		    {
		    	t=b[i];
		    	b[i]=b[j];
		    	b[j]=t;
			}
			printf("\ncac so chan dc sap xep:\n");
			for(i=1;i<=d;++i)
			printf("%5d",b[i]);
	}
}
