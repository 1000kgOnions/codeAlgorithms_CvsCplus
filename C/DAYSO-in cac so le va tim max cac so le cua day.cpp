#include<stdio.h>
#include<math.h>
int main()
{
	int n,i, a[100],max=0;
	printf("so phan tu cua day:");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{	
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	if(a[i]%2==1)
    	max=a[i];
	}
	if(max==0)
	printf("day khong co so le\n");
	else
	{
		for(i=1;i<=n;++i)
		if(a[i]%2==1 && a[i]>max )
		max=a[i];
		printf("max cac so le cua day=%d",max);
	}
	
}
